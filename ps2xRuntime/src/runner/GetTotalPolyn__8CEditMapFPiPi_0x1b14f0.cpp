#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetTotalPolyn__8CEditMapFPiPi
// Address: 0x1b14f0 - 0x1b1624
void GetTotalPolyn__8CEditMapFPiPi_0x1b14f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetTotalPolyn__8CEditMapFPiPi_0x1b14f0");
#endif

    switch (ctx->pc) {
        case 0x1b153cu: goto label_1b153c;
        case 0x1b1544u: goto label_1b1544;
        case 0x1b15a4u: goto label_1b15a4;
        case 0x1b15b4u: goto label_1b15b4;
        default: break;
    }

    ctx->pc = 0x1b14f0u;

    // 0x1b14f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b14f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b14f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1b14f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1b14f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1b14f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1b14fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1b14fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1b1500: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1b1500u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1504: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b1504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b1508: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b1508u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b150c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1b150cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1b1510: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1b1510u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1514: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1b1514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1b1518: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b1518u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b151c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b1520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1524: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b1524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1b1528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1b152c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b152cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1530: 0x8c930d44  lw          $s3, 0xD44($a0)
    ctx->pc = 0x1b1530u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3396)));
    // 0x1b1534: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B1534u;
    {
        const bool branch_taken_0x1b1534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1534u;
            // 0x1b1538: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1534) {
            ctx->pc = 0x1B1578u;
            goto label_1b1578;
        }
    }
    ctx->pc = 0x1B153Cu;
label_1b153c:
    // 0x1b153c: 0xc0bb988  jal         func_2EE620
    ctx->pc = 0x1B153Cu;
    SET_GPR_U32(ctx, 31, 0x1B1544u);
    ctx->pc = 0x1B1540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B153Cu;
            // 0x1b1540: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE620u;
    if (runtime->hasFunction(0x2EE620u)) {
        auto targetFn = runtime->lookupFunction(0x2EE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1544u; }
        if (ctx->pc != 0x1B1544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNormalPlaceParts__8CEditMapFP10CEditParts_0x2ee620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1544u; }
        if (ctx->pc != 0x1B1544u) { return; }
    }
    ctx->pc = 0x1B1544u;
label_1b1544:
    // 0x1b1544: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1544u;
    {
        const bool branch_taken_0x1b1544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1544) {
            ctx->pc = 0x1B1570u;
            goto label_1b1570;
        }
    }
    ctx->pc = 0x1B154Cu;
    // 0x1b154c: 0x8e620324  lw          $v0, 0x324($s3)
    ctx->pc = 0x1b154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 804)));
    // 0x1b1550: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B1550u;
    {
        const bool branch_taken_0x1b1550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1550) {
            ctx->pc = 0x1B1570u;
            goto label_1b1570;
        }
    }
    ctx->pc = 0x1B1558u;
    // 0x1b1558: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x1b1558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b155c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b155cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b1560: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x1b1560u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1b1564: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1b1564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b1568: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1b1568u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b156c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x1b156cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1b1570:
    // 0x1b1570: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b1574: 0x26730330  addiu       $s3, $s3, 0x330
    ctx->pc = 0x1b1574u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 816));
label_1b1578:
    // 0x1b1578: 0x8ea20d40  lw          $v0, 0xD40($s5)
    ctx->pc = 0x1b1578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3392)));
    // 0x1b157c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b157cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b1580: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1B1580u;
    {
        const bool branch_taken_0x1b1580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1580u;
            // 0x1b1584: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1580) {
            ctx->pc = 0x1B153Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b153c;
        }
    }
    ctx->pc = 0x1B1588u;
    // 0x1b1588: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b1588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b158c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1b158cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1b1590: 0x244269a0  addiu       $v0, $v0, 0x69A0
    ctx->pc = 0x1b1590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27040));
    // 0x1b1594: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b1594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1598: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1b1598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b159c: 0xc0a5ae0  jal         func_296B80
    ctx->pc = 0x1B159Cu;
    SET_GPR_U32(ctx, 31, 0x1B15A4u);
    ctx->pc = 0x1B15A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B159Cu;
            // 0x1b15a0: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296B80u;
    if (runtime->hasFunction(0x296B80u)) {
        auto targetFn = runtime->lookupFunction(0x296B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15A4u; }
        if (ctx->pc != 0x1B15A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRiverNum__8CEditMapFPf_0x296b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15A4u; }
        if (ctx->pc != 0x1B15A4u) { return; }
    }
    ctx->pc = 0x1B15A4u;
label_1b15a4:
    // 0x1b15a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1b15a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b15a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15ac: 0xc06c2d8  jal         func_1B0B60
    ctx->pc = 0x1B15ACu;
    SET_GPR_U32(ctx, 31, 0x1B15B4u);
    ctx->pc = 0x1B15B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15ACu;
            // 0x1b15b0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0B60u;
    if (runtime->hasFunction(0x1B0B60u)) {
        auto targetFn = runtime->lookupFunction(0x1B0B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15B4u; }
        if (ctx->pc != 0x1B15B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetePartsInfoAtType__8CEditMapFi_0x1b0b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B15B4u; }
        if (ctx->pc != 0x1B15B4u) { return; }
    }
    ctx->pc = 0x1B15B4u;
label_1b15b4:
    // 0x1b15b4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B15B4u;
    {
        const bool branch_taken_0x1b15b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15b4) {
            ctx->pc = 0x1B15E0u;
            goto label_1b15e0;
        }
    }
    ctx->pc = 0x1B15BCu;
    // 0x1b15bc: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1b15c0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1b15c4: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x1b15c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1b15c8: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1b15c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1b15cc: 0x72631818  mult1       $v1, $s3, $v1
    ctx->pc = 0x1b15ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b15d0: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x1b15d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x1b15d4: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1b15d8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x1b15d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b15dc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b15e0:
    // 0x1b15e0: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B15E0u;
    {
        const bool branch_taken_0x1b15e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b15e0) {
            ctx->pc = 0x1B15ECu;
            goto label_1b15ec;
        }
    }
    ctx->pc = 0x1B15E8u;
    // 0x1b15e8: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x1b15e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
label_1b15ec:
    // 0x1b15ec: 0x12e00002  beqz        $s7, . + 4 + (0x2 << 2)
    ctx->pc = 0x1B15ECu;
    {
        const bool branch_taken_0x1b15ec = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15ECu;
            // 0x1b15f0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15ec) {
            ctx->pc = 0x1B15F8u;
            goto label_1b15f8;
        }
    }
    ctx->pc = 0x1B15F4u;
    // 0x1b15f4: 0xaef20000  sw          $s2, 0x0($s7)
    ctx->pc = 0x1b15f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
label_1b15f8:
    // 0x1b15f8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1b15f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b15fc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1b15fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b1600: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1b1600u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b1604: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1b1604u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b1608: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1b1608u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b160c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1b160cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b1610: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b1610u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1614: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1614u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1b1618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b161c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B161Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B161Cu;
            // 0x1b1620: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B1624u;
}
