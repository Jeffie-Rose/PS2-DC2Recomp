#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _EOH_SYNC_OBJ__FP12RS_STACKDATAi
// Address: 0x274480 - 0x2746f4
void ps2__EOH_SYNC_OBJ__FP12RS_STACKDATAi_0x274480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__EOH_SYNC_OBJ__FP12RS_STACKDATAi_0x274480");
#endif

    switch (ctx->pc) {
        case 0x2744dcu: goto label_2744dc;
        case 0x2744f8u: goto label_2744f8;
        case 0x274524u: goto label_274524;
        case 0x274538u: goto label_274538;
        case 0x274548u: goto label_274548;
        case 0x274574u: goto label_274574;
        case 0x274588u: goto label_274588;
        case 0x274598u: goto label_274598;
        case 0x274608u: goto label_274608;
        case 0x27461cu: goto label_27461c;
        case 0x274628u: goto label_274628;
        case 0x27465cu: goto label_27465c;
        case 0x274674u: goto label_274674;
        case 0x274690u: goto label_274690;
        case 0x2746b4u: goto label_2746b4;
        default: break;
    }

    ctx->pc = 0x274480u;

    // 0x274480: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x274480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x274484: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x274484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x274488: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x274488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x27448c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27448cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x274490: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x274490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x274494: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x274494u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274498: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x274498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27449c: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x27449cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2744a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2744a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2744a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2744a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2744a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2744a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2744ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2744acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2744b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2744B0u;
    {
        const bool branch_taken_0x2744b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2744B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744B0u;
            // 0x2744b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744b0) {
            ctx->pc = 0x2744C4u;
            goto label_2744c4;
        }
    }
    ctx->pc = 0x2744B8u;
    // 0x2744b8: 0x2ac10005  slti        $at, $s6, 0x5
    ctx->pc = 0x2744b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2744bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x2744BCu;
    {
        const bool branch_taken_0x2744bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2744bc) {
            ctx->pc = 0x2744CCu;
            goto label_2744cc;
        }
    }
    ctx->pc = 0x2744C4u;
label_2744c4:
    // 0x2744c4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x2744C4u;
    {
        const bool branch_taken_0x2744c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744C4u;
            // 0x2744c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744c4) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x2744CCu;
label_2744cc:
    // 0x2744cc: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x2744ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x2744d0: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2744d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2744d4: 0xc0a1214  jal         func_284850
    ctx->pc = 0x2744D4u;
    SET_GPR_U32(ctx, 31, 0x2744DCu);
    ctx->pc = 0x2744D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2744D4u;
            // 0x2744d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284850u;
    if (runtime->hasFunction(0x284850u)) {
        auto targetFn = runtime->lookupFunction(0x284850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744DCu; }
        if (ctx->pc != 0x2744DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveMap__6CSceneFPP4CMapi_0x284850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744DCu; }
        if (ctx->pc != 0x2744DCu) { return; }
    }
    ctx->pc = 0x2744DCu;
label_2744dc:
    // 0x2744dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2744dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2744e0: 0x1e200003  bgtz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2744E0u;
    {
        const bool branch_taken_0x2744e0 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x2744E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744E0u;
            // 0x2744e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744e0) {
            ctx->pc = 0x2744F0u;
            goto label_2744f0;
        }
    }
    ctx->pc = 0x2744E8u;
    // 0x2744e8: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2744E8u;
    {
        const bool branch_taken_0x2744e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2744ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2744E8u;
            // 0x2744ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2744e8) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x2744F0u;
label_2744f0:
    // 0x2744f0: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2744F0u;
    SET_GPR_U32(ctx, 31, 0x2744F8u);
    ctx->pc = 0x2744F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2744F0u;
            // 0x2744f4: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744F8u; }
        if (ctx->pc != 0x2744F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2744F8u; }
        if (ctx->pc != 0x2744F8u) { return; }
    }
    ctx->pc = 0x2744F8u;
label_2744f8:
    // 0x2744f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2744f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2744fc: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2744fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274500: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x274500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x274504: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x274504u;
    {
        const bool branch_taken_0x274504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274504u;
            // 0x274508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274504) {
            ctx->pc = 0x27456Cu;
            goto label_27456c;
        }
    }
    ctx->pc = 0x27450Cu;
    // 0x27450c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27450Cu;
    {
        const bool branch_taken_0x27450c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27450Cu;
            // 0x274510: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27450c) {
            ctx->pc = 0x27451Cu;
            goto label_27451c;
        }
    }
    ctx->pc = 0x274514u;
    // 0x274514: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x274514u;
    {
        const bool branch_taken_0x274514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274514) {
            ctx->pc = 0x2745B4u;
            goto label_2745b4;
        }
    }
    ctx->pc = 0x27451Cu;
label_27451c:
    // 0x27451c: 0xc097e18  jal         func_25F860
    ctx->pc = 0x27451Cu;
    SET_GPR_U32(ctx, 31, 0x274524u);
    ctx->pc = 0x274520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27451Cu;
            // 0x274520: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274524u; }
        if (ctx->pc != 0x274524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274524u; }
        if (ctx->pc != 0x274524u) { return; }
    }
    ctx->pc = 0x274524u;
label_274524:
    // 0x274524: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x274524u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x274528: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x274528u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27452c: 0x10200021  beqz        $at, . + 4 + (0x21 << 2)
    ctx->pc = 0x27452Cu;
    {
        const bool branch_taken_0x27452c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27452Cu;
            // 0x274530: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27452c) {
            ctx->pc = 0x2745B4u;
            goto label_2745b4;
        }
    }
    ctx->pc = 0x274534u;
    // 0x274534: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x274534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274538:
    // 0x274538: 0x2bd1021  addu        $v0, $s5, $sp
    ctx->pc = 0x274538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 29)));
    // 0x27453c: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x27453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x274540: 0xc057530  jal         func_15D4C0
    ctx->pc = 0x274540u;
    SET_GPR_U32(ctx, 31, 0x274548u);
    ctx->pc = 0x274544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274540u;
            // 0x274544: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4C0u;
    if (runtime->hasFunction(0x15D4C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274548u; }
        if (ctx->pc != 0x274548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFi_0x15d4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274548u; }
        if (ctx->pc != 0x274548u) { return; }
    }
    ctx->pc = 0x274548u;
label_274548:
    // 0x274548: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274548u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27454c: 0x16600019  bnez        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x27454Cu;
    {
        const bool branch_taken_0x27454c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27454c) {
            ctx->pc = 0x2745B4u;
            goto label_2745b4;
        }
    }
    ctx->pc = 0x274554u;
    // 0x274554: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x274554u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x274558: 0x251102a  slt         $v0, $s2, $s1
    ctx->pc = 0x274558u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x27455c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27455Cu;
    {
        const bool branch_taken_0x27455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27455Cu;
            // 0x274560: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27455c) {
            ctx->pc = 0x274538u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274538;
        }
    }
    ctx->pc = 0x274564u;
    // 0x274564: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x274564u;
    {
        const bool branch_taken_0x274564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274564) {
            ctx->pc = 0x2745B4u;
            goto label_2745b4;
        }
    }
    ctx->pc = 0x27456Cu;
label_27456c:
    // 0x27456c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27456Cu;
    SET_GPR_U32(ctx, 31, 0x274574u);
    ctx->pc = 0x274570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27456Cu;
            // 0x274570: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274574u; }
        if (ctx->pc != 0x274574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274574u; }
        if (ctx->pc != 0x274574u) { return; }
    }
    ctx->pc = 0x274574u;
label_274574:
    // 0x274574: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x274574u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x274578: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x274578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27457c: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x27457Cu;
    {
        const bool branch_taken_0x27457c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27457Cu;
            // 0x274580: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27457c) {
            ctx->pc = 0x2745B4u;
            goto label_2745b4;
        }
    }
    ctx->pc = 0x274584u;
    // 0x274584: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x274584u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274588:
    // 0x274588: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x274588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
    // 0x27458c: 0x8c440090  lw          $a0, 0x90($v0)
    ctx->pc = 0x27458cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x274590: 0xc057508  jal         func_15D420
    ctx->pc = 0x274590u;
    SET_GPR_U32(ctx, 31, 0x274598u);
    ctx->pc = 0x274594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274590u;
            // 0x274594: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D420u;
    if (runtime->hasFunction(0x15D420u)) {
        auto targetFn = runtime->lookupFunction(0x15D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274598u; }
        if (ctx->pc != 0x274598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPlaceParts__4CMapFPc_0x15d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274598u; }
        if (ctx->pc != 0x274598u) { return; }
    }
    ctx->pc = 0x274598u;
label_274598:
    // 0x274598: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x274598u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27459c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x27459Cu;
    {
        const bool branch_taken_0x27459c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x27459c) {
            ctx->pc = 0x2745B4u;
            goto label_2745b4;
        }
    }
    ctx->pc = 0x2745A4u;
    // 0x2745a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2745a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x2745a8: 0x2b1102a  slt         $v0, $s5, $s1
    ctx->pc = 0x2745a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2745ac: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2745ACu;
    {
        const bool branch_taken_0x2745ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2745B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745ACu;
            // 0x2745b0: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745ac) {
            ctx->pc = 0x274588u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274588;
        }
    }
    ctx->pc = 0x2745B4u;
label_2745b4:
    // 0x2745b4: 0x0  nop
    ctx->pc = 0x2745b4u;
    // NOP
    // 0x2745b8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2745B8u;
    {
        const bool branch_taken_0x2745b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2745BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745B8u;
            // 0x2745bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745b8) {
            ctx->pc = 0x2745C8u;
            goto label_2745c8;
        }
    }
    ctx->pc = 0x2745C0u;
    // 0x2745c0: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x2745C0u;
    {
        const bool branch_taken_0x2745c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745C0u;
            // 0x2745c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745c0) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x2745C8u;
label_2745c8:
    // 0x2745c8: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2745C8u;
    {
        const bool branch_taken_0x2745c8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2745CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745C8u;
            // 0x2745cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745c8) {
            ctx->pc = 0x274610u;
            goto label_274610;
        }
    }
    ctx->pc = 0x2745D0u;
    // 0x2745d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2745d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2745d4: 0x12c2000f  beq         $s6, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2745D4u;
    {
        const bool branch_taken_0x2745d4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2745D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745D4u;
            // 0x2745d8: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745d4) {
            ctx->pc = 0x274614u;
            goto label_274614;
        }
    }
    ctx->pc = 0x2745DCu;
    // 0x2745dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2745dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2745e0: 0x12c20003  beq         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2745E0u;
    {
        const bool branch_taken_0x2745e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2745E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745E0u;
            // 0x2745e4: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745e0) {
            ctx->pc = 0x2745F0u;
            goto label_2745f0;
        }
    }
    ctx->pc = 0x2745E8u;
    // 0x2745e8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2745E8u;
    {
        const bool branch_taken_0x2745e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2745ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2745E8u;
            // 0x2745ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2745e8) {
            ctx->pc = 0x2746BCu;
            goto label_2746bc;
        }
    }
    ctx->pc = 0x2745F0u;
label_2745f0:
    // 0x2745f0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2745f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2745f4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2745f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745f8: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2745f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2745fc: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2745fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274600: 0xc097690  jal         func_25DA40
    ctx->pc = 0x274600u;
    SET_GPR_U32(ctx, 31, 0x274608u);
    ctx->pc = 0x274604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274600u;
            // 0x274604: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA40u;
    if (runtime->hasFunction(0x25DA40u)) {
        auto targetFn = runtime->lookupFunction(0x25DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274608u; }
        if (ctx->pc != 0x274608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP7CObjecti_0x25da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274608u; }
        if (ctx->pc != 0x274608u) { return; }
    }
    ctx->pc = 0x274608u;
label_274608:
    // 0x274608: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x274608u;
    {
        const bool branch_taken_0x274608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27460Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274608u;
            // 0x27460c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274608) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x274610u;
label_274610:
    // 0x274610: 0x24900008  addiu       $s0, $a0, 0x8
    ctx->pc = 0x274610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_274614:
    // 0x274614: 0xc097e48  jal         func_25F920
    ctx->pc = 0x274614u;
    SET_GPR_U32(ctx, 31, 0x27461Cu);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27461Cu; }
        if (ctx->pc != 0x27461Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27461Cu; }
        if (ctx->pc != 0x27461Cu) { return; }
    }
    ctx->pc = 0x27461Cu;
label_27461c:
    // 0x27461c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27461cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274620: 0xc059924  jal         func_166490
    ctx->pc = 0x274620u;
    SET_GPR_U32(ctx, 31, 0x274628u);
    ctx->pc = 0x274624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274620u;
            // 0x274624: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166490u;
    if (runtime->hasFunction(0x166490u)) {
        auto targetFn = runtime->lookupFunction(0x166490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274628u; }
        if (ctx->pc != 0x274628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchPiece__9CMapPartsFPc_0x166490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274628u; }
        if (ctx->pc != 0x274628u) { return; }
    }
    ctx->pc = 0x274628u;
label_274628:
    // 0x274628: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274628u;
    {
        const bool branch_taken_0x274628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274628u;
            // 0x27462c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274628) {
            ctx->pc = 0x274638u;
            goto label_274638;
        }
    }
    ctx->pc = 0x274630u;
    // 0x274630: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x274630u;
    {
        const bool branch_taken_0x274630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274630u;
            // 0x274634: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274630) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x274638u;
label_274638:
    // 0x274638: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27463c: 0x16c20009  bne         $s6, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27463Cu;
    {
        const bool branch_taken_0x27463c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x274640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27463Cu;
            // 0x274640: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27463c) {
            ctx->pc = 0x274664u;
            goto label_274664;
        }
    }
    ctx->pc = 0x274644u;
    // 0x274644: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x274644u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x274648: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x274648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27464c: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x27464cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x274650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274654: 0xc097690  jal         func_25DA40
    ctx->pc = 0x274654u;
    SET_GPR_U32(ctx, 31, 0x27465Cu);
    ctx->pc = 0x274658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x274654u;
            // 0x274658: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DA40u;
    if (runtime->hasFunction(0x25DA40u)) {
        auto targetFn = runtime->lookupFunction(0x25DA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27465Cu; }
        if (ctx->pc != 0x27465Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP7CObjecti_0x25da40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27465Cu; }
        if (ctx->pc != 0x27465Cu) { return; }
    }
    ctx->pc = 0x27465Cu;
label_27465c:
    // 0x27465c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27465Cu;
    {
        const bool branch_taken_0x27465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27465c) {
            ctx->pc = 0x2746C4u;
            goto label_2746c4;
        }
    }
    ctx->pc = 0x274664u;
label_274664:
    // 0x274664: 0x16c20017  bne         $s6, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x274664u;
    {
        const bool branch_taken_0x274664 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x274668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274664u;
            // 0x274668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274664) {
            ctx->pc = 0x2746C4u;
            goto label_2746c4;
        }
    }
    ctx->pc = 0x27466Cu;
    // 0x27466c: 0xc097e48  jal         func_25F920
    ctx->pc = 0x27466Cu;
    SET_GPR_U32(ctx, 31, 0x274674u);
    ctx->pc = 0x25F920u;
    if (runtime->hasFunction(0x25F920u)) {
        auto targetFn = runtime->lookupFunction(0x25F920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274674u; }
        if (ctx->pc != 0x274674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x25f920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274674u; }
        if (ctx->pc != 0x274674u) { return; }
    }
    ctx->pc = 0x274674u;
label_274674:
    // 0x274674: 0x8ce40070  lw          $a0, 0x70($a3)
    ctx->pc = 0x274674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 112)));
    // 0x274678: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274678u;
    {
        const bool branch_taken_0x274678 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274678u;
            // 0x27467c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274678) {
            ctx->pc = 0x274688u;
            goto label_274688;
        }
    }
    ctx->pc = 0x274680u;
    // 0x274680: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x274680u;
    {
        const bool branch_taken_0x274680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274680u;
            // 0x274684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274680) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x274688u;
label_274688:
    // 0x274688: 0xc04ddb4  jal         func_1376D0
    ctx->pc = 0x274688u;
    SET_GPR_U32(ctx, 31, 0x274690u);
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274690u; }
        if (ctx->pc != 0x274690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274690u; }
        if (ctx->pc != 0x274690u) { return; }
    }
    ctx->pc = 0x274690u;
label_274690:
    // 0x274690: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x274690u;
    {
        const bool branch_taken_0x274690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274690u;
            // 0x274694: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274690) {
            ctx->pc = 0x2746A0u;
            goto label_2746a0;
        }
    }
    ctx->pc = 0x274698u;
    // 0x274698: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x274698u;
    {
        const bool branch_taken_0x274698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274698u;
            // 0x27469c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274698) {
            ctx->pc = 0x2746C8u;
            goto label_2746c8;
        }
    }
    ctx->pc = 0x2746A0u;
label_2746a0:
    // 0x2746a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2746a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2746a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2746a8: 0x2484e880  addiu       $a0, $a0, -0x1780
    ctx->pc = 0x2746a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961280));
    // 0x2746ac: 0xc0976c0  jal         func_25DB00
    ctx->pc = 0x2746ACu;
    SET_GPR_U32(ctx, 31, 0x2746B4u);
    ctx->pc = 0x2746B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2746ACu;
            // 0x2746b0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25DB00u;
    if (runtime->hasFunction(0x25DB00u)) {
        auto targetFn = runtime->lookupFunction(0x25DB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746B4u; }
        if (ctx->pc != 0x2746B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__10CEohMotherFiiP8mgCFrame_0x25db00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2746B4u; }
        if (ctx->pc != 0x2746B4u) { return; }
    }
    ctx->pc = 0x2746B4u;
label_2746b4:
    // 0x2746b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2746B4u;
    {
        const bool branch_taken_0x2746b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2746b4) {
            ctx->pc = 0x2746C4u;
            goto label_2746c4;
        }
    }
    ctx->pc = 0x2746BCu;
label_2746bc:
    // 0x2746bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2746BCu;
    {
        const bool branch_taken_0x2746bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2746C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2746BCu;
            // 0x2746c0: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2746bc) {
            ctx->pc = 0x2746CCu;
            goto label_2746cc;
        }
    }
    ctx->pc = 0x2746C4u;
label_2746c4:
    // 0x2746c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2746c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2746c8:
    // 0x2746c8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2746c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2746cc:
    // 0x2746cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2746ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2746d0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2746d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2746d4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2746d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2746d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2746d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2746dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2746dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2746e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2746e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2746e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2746e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2746e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2746e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2746ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2746ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2746F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2746ECu;
            // 0x2746f0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2746F4u;
}
