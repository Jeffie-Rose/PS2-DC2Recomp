#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightInfo__4CMapFP16CMapLightingInfo
// Address: 0x161490 - 0x161634
void GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightInfo__4CMapFP16CMapLightingInfo_0x161490");
#endif

    switch (ctx->pc) {
        case 0x1614c4u: goto label_1614c4;
        case 0x1614d8u: goto label_1614d8;
        case 0x1614f8u: goto label_1614f8;
        case 0x161504u: goto label_161504;
        case 0x161514u: goto label_161514;
        case 0x161528u: goto label_161528;
        case 0x16153cu: goto label_16153c;
        case 0x161548u: goto label_161548;
        case 0x161584u: goto label_161584;
        case 0x161598u: goto label_161598;
        case 0x1615acu: goto label_1615ac;
        case 0x1615b8u: goto label_1615b8;
        case 0x1615c4u: goto label_1615c4;
        case 0x1615f8u: goto label_1615f8;
        default: break;
    }

    ctx->pc = 0x161490u;

    // 0x161490: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x161490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x161494: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x161494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x161498: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x161498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16149c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x16149cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1614a0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1614a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1614a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1614a8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1614a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614ac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1614acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1614b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1614b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1614b4: 0x12800056  beqz        $s4, . + 4 + (0x56 << 2)
    ctx->pc = 0x1614B4u;
    {
        const bool branch_taken_0x1614b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1614B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1614B4u;
            // 0x1614b8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614b4) {
            ctx->pc = 0x161610u;
            goto label_161610;
        }
    }
    ctx->pc = 0x1614BCu;
    // 0x1614bc: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1614BCu;
    SET_GPR_U32(ctx, 31, 0x1614C4u);
    ctx->pc = 0x1614C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614BCu;
            // 0x1614c0: 0x8eb000d0  lw          $s0, 0xD0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161770u;
    if (runtime->hasFunction(0x161770u)) {
        auto targetFn = runtime->lookupFunction(0x161770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614C4u; }
        if (ctx->pc != 0x1614C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveLightNo__4CMapFv_0x161770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614C4u; }
        if (ctx->pc != 0x1614C4u) { return; }
    }
    ctx->pc = 0x1614C4u;
label_1614c4:
    // 0x1614c4: 0x50082a  slt         $at, $v0, $s0
    ctx->pc = 0x1614c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1614c8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1614C8u;
    {
        const bool branch_taken_0x1614c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1614CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1614C8u;
            // 0x1614cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614c8) {
            ctx->pc = 0x1614F0u;
            goto label_1614f0;
        }
    }
    ctx->pc = 0x1614D0u;
    // 0x1614d0: 0xc058520  jal         func_161480
    ctx->pc = 0x1614D0u;
    SET_GPR_U32(ctx, 31, 0x1614D8u);
    ctx->pc = 0x1614D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614D0u;
            // 0x1614d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161480u;
    if (runtime->hasFunction(0x161480u)) {
        auto targetFn = runtime->lookupFunction(0x161480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614D8u; }
        if (ctx->pc != 0x1614D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeEnable__4CMapFv_0x161480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614D8u; }
        if (ctx->pc != 0x1614D8u) { return; }
    }
    ctx->pc = 0x1614D8u;
label_1614d8:
    // 0x1614d8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1614D8u;
    {
        const bool branch_taken_0x1614d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1614DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1614D8u;
            // 0x1614dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1614d8) {
            ctx->pc = 0x161520u;
            goto label_161520;
        }
    }
    ctx->pc = 0x1614E0u;
    // 0x1614e0: 0x8ea200cc  lw          $v0, 0xCC($s5)
    ctx->pc = 0x1614e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x1614e4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1614E4u;
    {
        const bool branch_taken_0x1614e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1614e4) {
            ctx->pc = 0x16151Cu;
            goto label_16151c;
        }
    }
    ctx->pc = 0x1614ECu;
    // 0x1614ec: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1614ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1614f0:
    // 0x1614f0: 0xc0585dc  jal         func_161770
    ctx->pc = 0x1614F0u;
    SET_GPR_U32(ctx, 31, 0x1614F8u);
    ctx->pc = 0x161770u;
    if (runtime->hasFunction(0x161770u)) {
        auto targetFn = runtime->lookupFunction(0x161770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614F8u; }
        if (ctx->pc != 0x1614F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveLightNo__4CMapFv_0x161770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1614F8u; }
        if (ctx->pc != 0x1614F8u) { return; }
    }
    ctx->pc = 0x1614F8u;
label_1614f8:
    // 0x1614f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1614f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1614fc: 0xc0585d8  jal         func_161760
    ctx->pc = 0x1614FCu;
    SET_GPR_U32(ctx, 31, 0x161504u);
    ctx->pc = 0x161500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1614FCu;
            // 0x161500: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161760u;
    if (runtime->hasFunction(0x161760u)) {
        auto targetFn = runtime->lookupFunction(0x161760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161504u; }
        if (ctx->pc != 0x161504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingInfo__4CMapFi_0x161760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161504u; }
        if (ctx->pc != 0x161504u) { return; }
    }
    ctx->pc = 0x161504u;
label_161504:
    // 0x161504: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x161504u;
    {
        const bool branch_taken_0x161504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x161508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161504u;
            // 0x161508: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161504) {
            ctx->pc = 0x16151Cu;
            goto label_16151c;
        }
    }
    ctx->pc = 0x16150Cu;
    // 0x16150c: 0xc058590  jal         func_161640
    ctx->pc = 0x16150Cu;
    SET_GPR_U32(ctx, 31, 0x161514u);
    ctx->pc = 0x161510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16150Cu;
            // 0x161510: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161640u;
    if (runtime->hasFunction(0x161640u)) {
        auto targetFn = runtime->lookupFunction(0x161640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161514u; }
        if (ctx->pc != 0x161514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__16CMapLightingInfoFRC16CMapLightingInfo_0x161640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161514u; }
        if (ctx->pc != 0x161514u) { return; }
    }
    ctx->pc = 0x161514u;
label_161514:
    // 0x161514: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x161514u;
    {
        const bool branch_taken_0x161514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161514u;
            // 0x161518: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161514) {
            ctx->pc = 0x161614u;
            goto label_161614;
        }
    }
    ctx->pc = 0x16151Cu;
label_16151c:
    // 0x16151c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16151cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_161520:
    // 0x161520: 0xc058368  jal         func_160DA0
    ctx->pc = 0x161520u;
    SET_GPR_U32(ctx, 31, 0x161528u);
    ctx->pc = 0x160DA0u;
    if (runtime->hasFunction(0x160DA0u)) {
        auto targetFn = runtime->lookupFunction(0x160DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161528u; }
        if (ctx->pc != 0x161528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeLightBand__4CMapFv_0x160da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161528u; }
        if (ctx->pc != 0x161528u) { return; }
    }
    ctx->pc = 0x161528u;
label_161528:
    // 0x161528: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x161528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x16152c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16152cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161530: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x161530u;
    {
        const bool branch_taken_0x161530 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x161534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161530u;
            // 0x161534: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161530) {
            ctx->pc = 0x161570u;
            goto label_161570;
        }
    }
    ctx->pc = 0x161538u;
    // 0x161538: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x161538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16153c:
    // 0x16153c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161540: 0xc059410  jal         func_165040
    ctx->pc = 0x161540u;
    SET_GPR_U32(ctx, 31, 0x161548u);
    ctx->pc = 0x161544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161540u;
            // 0x161544: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165040u;
    if (runtime->hasFunction(0x165040u)) {
        auto targetFn = runtime->lookupFunction(0x165040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161548u; }
        if (ctx->pc != 0x161548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightingInfo__8CMapInfoFi_0x165040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161548u; }
        if (ctx->pc != 0x161548u) { return; }
    }
    ctx->pc = 0x161548u;
label_161548:
    // 0x161548: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x161548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x16154c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x16154cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x161550: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x161550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x161554: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x161554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x161558: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x161558u;
    {
        const bool branch_taken_0x161558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x161558) {
            ctx->pc = 0x161610u;
            goto label_161610;
        }
    }
    ctx->pc = 0x161560u;
    // 0x161560: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x161560u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x161564: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x161564u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x161568: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x161568u;
    {
        const bool branch_taken_0x161568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16156Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161568u;
            // 0x16156c: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161568) {
            ctx->pc = 0x16153Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_16153c;
        }
    }
    ctx->pc = 0x161570u;
label_161570:
    // 0x161570: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x161570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x161574: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x161574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x161578: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x161578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x16157c: 0xc058590  jal         func_161640
    ctx->pc = 0x16157Cu;
    SET_GPR_U32(ctx, 31, 0x161584u);
    ctx->pc = 0x161580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16157Cu;
            // 0x161580: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161640u;
    if (runtime->hasFunction(0x161640u)) {
        auto targetFn = runtime->lookupFunction(0x161640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161584u; }
        if (ctx->pc != 0x161584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__16CMapLightingInfoFRC16CMapLightingInfo_0x161640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161584u; }
        if (ctx->pc != 0x161584u) { return; }
    }
    ctx->pc = 0x161584u;
label_161584:
    // 0x161584: 0x8ea300c4  lw          $v1, 0xC4($s5)
    ctx->pc = 0x161584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 196)));
    // 0x161588: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x161588u;
    {
        const bool branch_taken_0x161588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16158Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161588u;
            // 0x16158c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161588) {
            ctx->pc = 0x161610u;
            goto label_161610;
        }
    }
    ctx->pc = 0x161590u;
    // 0x161590: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x161590u;
    SET_GPR_U32(ctx, 31, 0x161598u);
    ctx->pc = 0x161594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161590u;
            // 0x161594: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1610F0u;
    if (runtime->hasFunction(0x1610F0u)) {
        auto targetFn = runtime->lookupFunction(0x1610F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161598u; }
        if (ctx->pc != 0x161598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTimeLightingRatio__4CMapFPf_0x1610f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161598u; }
        if (ctx->pc != 0x161598u) { return; }
    }
    ctx->pc = 0x161598u;
label_161598:
    // 0x161598: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x161598u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16159c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x16159cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615a0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1615a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615a4: 0xc0585e4  jal         func_161790
    ctx->pc = 0x1615A4u;
    SET_GPR_U32(ctx, 31, 0x1615ACu);
    ctx->pc = 0x1615A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615A4u;
            // 0x1615a8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161790u;
    if (runtime->hasFunction(0x161790u)) {
        auto targetFn = runtime->lookupFunction(0x161790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615ACu; }
        if (ctx->pc != 0x1615ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfoPfi_0x161790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615ACu; }
        if (ctx->pc != 0x1615ACu) { return; }
    }
    ctx->pc = 0x1615ACu;
label_1615ac:
    // 0x1615ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1615acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1615b0: 0xc0584ac  jal         func_1612B0
    ctx->pc = 0x1615B0u;
    SET_GPR_U32(ctx, 31, 0x1615B8u);
    ctx->pc = 0x1615B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615B0u;
            // 0x1615b4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1612B0u;
    if (runtime->hasFunction(0x1612B0u)) {
        auto targetFn = runtime->lookupFunction(0x1612B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615B8u; }
        if (ctx->pc != 0x1615B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSunPoint__4CMapFPf_0x1612b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615B8u; }
        if (ctx->pc != 0x1615B8u) { return; }
    }
    ctx->pc = 0x1615B8u;
label_1615b8:
    // 0x1615b8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1615b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1615bc: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1615BCu;
    SET_GPR_U32(ctx, 31, 0x1615C4u);
    ctx->pc = 0x1615C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615BCu;
            // 0x1615c0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615C4u; }
        if (ctx->pc != 0x1615C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615C4u; }
        if (ctx->pc != 0x1615C4u) { return; }
    }
    ctx->pc = 0x1615C4u;
label_1615c4:
    // 0x1615c4: 0x27b000b4  addiu       $s0, $sp, 0xB4
    ctx->pc = 0x1615c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x1615c8: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1615c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1615cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1615ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1615d0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1615d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1615d4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1615d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1615d8: 0x0  nop
    ctx->pc = 0x1615d8u;
    // NOP
    // 0x1615dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1615dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1615e0: 0x0  nop
    ctx->pc = 0x1615e0u;
    // NOP
    // 0x1615e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1615E4u;
    {
        const bool branch_taken_0x1615e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1615E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1615E4u;
            // 0x1615e8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1615e4) {
            ctx->pc = 0x1615F8u;
            goto label_1615f8;
        }
    }
    ctx->pc = 0x1615ECu;
    // 0x1615ec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1615ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1615f0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x1615F0u;
    SET_GPR_U32(ctx, 31, 0x1615F8u);
    ctx->pc = 0x1615F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1615F0u;
            // 0x1615f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615F8u; }
        if (ctx->pc != 0x1615F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1615F8u; }
        if (ctx->pc != 0x1615F8u) { return; }
    }
    ctx->pc = 0x1615F8u;
label_1615f8:
    // 0x1615f8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1615f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1615fc: 0xe6800030  swc1        $f0, 0x30($s4)
    ctx->pc = 0x1615fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 48), bits); }
    // 0x161600: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x161600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161604: 0xe6800040  swc1        $f0, 0x40($s4)
    ctx->pc = 0x161604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    // 0x161608: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x161608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16160c: 0xe6800050  swc1        $f0, 0x50($s4)
    ctx->pc = 0x16160cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
label_161610:
    // 0x161610: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x161610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_161614:
    // 0x161614: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x161614u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x161618: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x161618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16161c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16161cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x161620: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x161620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161624: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x161624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161628: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16162c: 0x3e00008  jr          $ra
    ctx->pc = 0x16162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16162Cu;
            // 0x161630: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161634u;
}
