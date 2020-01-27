window.BENCHMARK_DATA = {
  "lastUpdate": 1580124586535,
  "repoUrl": "https://github.com/bernedom/SI",
  "entries": {
    "Catch2 Benchmark": [
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "933f143e69dcf13e9389e4c683cc0dcbd1eb660d",
          "message": "Merge pull request #33 from bernedom/building/continous-benchmarking\n\nBuilding/continous benchmarking",
          "timestamp": "2020-01-22T08:06:32+01:00",
          "tree_id": "95821986b244a62cfdc9cae14f19c4d4e6b9229f",
          "url": "https://github.com/bernedom/SI/commit/933f143e69dcf13e9389e4c683cc0dcbd1eb660d"
        },
        "date": 1579676871785,
        "tool": "catch2",
        "benches": [
          {
            "name": "Raw number assignment (reference)",
            "value": 8.074,
            "range": "+/- 2.252",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 10.54,
            "range": "+/- 11.374",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.691,
            "range": "+/- 2.79",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "noreply@github.com",
            "name": "GitHub",
            "username": "web-flow"
          },
          "distinct": true,
          "id": "f65255dea7f6f0b6275675c5e2a6af26589666b3",
          "message": "Merge pull request #34 from bernedom/testing/more-benchmarks\n\nTesting/more benchmarks",
          "timestamp": "2020-01-24T10:15:34+01:00",
          "tree_id": "e44a4d0b86a3f2c9c50e613bd97af11afad4680b",
          "url": "https://github.com/bernedom/SI/commit/f65255dea7f6f0b6275675c5e2a6af26589666b3"
        },
        "date": 1579857438711,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n29508 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n43353 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n40966 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42683 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.946,
            "range": "+/- 887",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.552,
            "range": "+/- 1.537",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 10.499,
            "range": "+/- 350",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 8.493,
            "range": "+/- 1.57",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.53,
            "range": "+/- 295",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 10.628,
            "range": "+/- 1.902",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 8.415,
            "range": "+/- 280",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 8.766,
            "range": "+/- 1.655",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 11.204,
            "range": "+/- 358",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 414.39,
            "range": "+/- 31.43",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 43.333,
            "range": "+/- 2.787",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.618,
            "range": "+/- 477",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 10.285,
            "range": "+/- 1.405",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "fad2d8e39b1ef47afc6f798dd617f93c097a17f5",
          "message": "Testing hints in CONTRIBUTING.md",
          "timestamp": "2020-01-25T16:22:18+01:00",
          "tree_id": "b9864c573463aa7be0a6866379ada1f023c4029e",
          "url": "https://github.com/bernedom/SI/commit/fad2d8e39b1ef47afc6f798dd617f93c097a17f5"
        },
        "date": 1579965832356,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n26674 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38278 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n37888 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n38335 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.055,
            "range": "+/- 842",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 6.476,
            "range": "+/- 759",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 7.67,
            "range": "+/- 810",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.167,
            "range": "+/- 1.219",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 7.137,
            "range": "+/- 1.077",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 9.115,
            "range": "+/- 1.195",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 7.529,
            "range": "+/- 929",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 7.546,
            "range": "+/- 1.199",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 7.721,
            "range": "+/- 889",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 349.172,
            "range": "+/- 47.785",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 40.671,
            "range": "+/- 6.036",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 6.134,
            "range": "+/- 865",
            "unit": "us",
            "extra": "100 samples\n8 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.335,
            "range": "+/- 1.041",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "404f2152d5e430190bb1d5f31093a74502a1c03c",
          "message": "Add hint about continous benchmarks",
          "timestamp": "2020-01-25T16:25:20+01:00",
          "tree_id": "f8d24daab23cb249b38e821405a2b7e94cc7413d",
          "url": "https://github.com/bernedom/SI/commit/404f2152d5e430190bb1d5f31093a74502a1c03c"
        },
        "date": 1579966020205,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31175 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n45044 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42791 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44994 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.237,
            "range": "+/- 1.261",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.652,
            "range": "+/- 1.217",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.166,
            "range": "+/- 1.798",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.363,
            "range": "+/- 2.571",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 8.783,
            "range": "+/- 2.474",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.434,
            "range": "+/- 2.7",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.103,
            "range": "+/- 2.054",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.176,
            "range": "+/- 2.242",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.525,
            "range": "+/- 6.42",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 485.37,
            "range": "+/- 36.734",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 48.635,
            "range": "+/- 7.982",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.616,
            "range": "+/- 1.311",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.324,
            "range": "+/- 3.101",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "bd525cca6e676e50bd117779f50b74b1e75e4fd8",
          "message": "Typos fixed",
          "timestamp": "2020-01-25T16:27:27+01:00",
          "tree_id": "aab7bb0feda8161a3b06ab232d9418f94fda7c3a",
          "url": "https://github.com/bernedom/SI/commit/bd525cca6e676e50bd117779f50b74b1e75e4fd8"
        },
        "date": 1579966124745,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n23958 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n35740 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n34655 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n35391 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 6.548,
            "range": "+/- 1.057",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 5.35,
            "range": "+/- 489",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 9.309,
            "range": "+/- 1.609",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 7.308,
            "range": "+/- 985",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 6.083,
            "range": "+/- 46",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 7.969,
            "range": "+/- 538",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 6.429,
            "range": "+/- 144",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 6.347,
            "range": "+/- 119",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 8.307,
            "range": "+/- 554",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 330.373,
            "range": "+/- 38.432",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 32.56,
            "range": "+/- 638",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 5.105,
            "range": "+/- 620",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 8.837,
            "range": "+/- 1.126",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          }
        ]
      },
      {
        "commit": {
          "author": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "committer": {
            "email": "dominik.berner@gmail.com",
            "name": "Dominik Berner",
            "username": "bernedom"
          },
          "distinct": true,
          "id": "d5e8ab33bc9c250564c44490842b24a532153ed2",
          "message": "Liniting markdown",
          "timestamp": "2020-01-27T12:28:04+01:00",
          "tree_id": "4a0366d27e70fd15914043d8d3bb2a5baf8474c9",
          "url": "https://github.com/bernedom/SI/commit/d5e8ab33bc9c250564c44490842b24a532153ed2"
        },
        "date": 1580124586134,
        "tool": "catch2",
        "benches": [
          {
            "name": "Default construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n31670 iterations"
          },
          {
            "name": "Value initialized construction",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44285 iterations"
          },
          {
            "name": "copy construction same ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n42619 iterations"
          },
          {
            "name": "copy construction different ratio",
            "value": 0,
            "range": "+/- 0",
            "unit": "ns",
            "extra": "100 samples\n44915 iterations"
          },
          {
            "name": "Raw number assignment (reference)",
            "value": 7.896,
            "range": "+/- 1.765",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "Same unit same ratio assignment",
            "value": 7.84,
            "range": "+/- 1.399",
            "unit": "us",
            "extra": "100 samples\n7 iterations"
          },
          {
            "name": "Same unit different ratio assignment",
            "value": 11.419,
            "range": "+/- 2.382",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number add assignment (reference)",
            "value": 9.31,
            "range": "+/- 2.047",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio add assignment",
            "value": 9.767,
            "range": "+/- 3.215",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio add assignment",
            "value": 11.59,
            "range": "+/- 2.304",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "Raw number subtract assignment (reference)",
            "value": 9.549,
            "range": "+/- 3.88",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit same ratio subtract assignment",
            "value": 9.073,
            "range": "+/- 1.426",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          },
          {
            "name": "Same unit different ratio subtract assignment",
            "value": 12.205,
            "range": "+/- 2.548",
            "unit": "us",
            "extra": "100 samples\n4 iterations"
          },
          {
            "name": "int64_t by unit division",
            "value": 475.996,
            "range": "+/- 33.301",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "long double by unit division",
            "value": 49.183,
            "range": "+/- 8.65",
            "unit": "us",
            "extra": "100 samples\n1 iterations"
          },
          {
            "name": "unit_cast same ratio unit",
            "value": 7.729,
            "range": "+/- 1.502",
            "unit": "us",
            "extra": "100 samples\n6 iterations"
          },
          {
            "name": "unit_cast different ratio unit",
            "value": 11.479,
            "range": "+/- 2.952",
            "unit": "us",
            "extra": "100 samples\n5 iterations"
          }
        ]
      }
    ]
  }
}