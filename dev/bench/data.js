window.BENCHMARK_DATA = {
  "lastUpdate": 1579676872375,
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
      }
    ]
  }
}