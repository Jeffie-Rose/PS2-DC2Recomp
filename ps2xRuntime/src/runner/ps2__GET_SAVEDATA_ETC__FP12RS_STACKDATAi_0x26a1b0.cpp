#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_SAVEDATA_ETC__FP12RS_STACKDATAi
// Address: 0x26a1b0 - 0x26a370
void ps2__GET_SAVEDATA_ETC__FP12RS_STACKDATAi_0x26a1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_SAVEDATA_ETC__FP12RS_STACKDATAi_0x26a1b0");
#endif

    switch (ctx->pc) {
        case 0x26a1c8u: goto label_26a1c8;
        case 0x26a1e4u: goto label_26a1e4;
        case 0x26a214u: goto label_26a214;
        case 0x26a240u: goto label_26a240;
        case 0x26a24cu: goto label_26a24c;
        case 0x26a268u: goto label_26a268;
        case 0x26a294u: goto label_26a294;
        case 0x26a2a0u: goto label_26a2a0;
        case 0x26a2b4u: goto label_26a2b4;
        case 0x26a2d8u: goto label_26a2d8;
        case 0x26a2f4u: goto label_26a2f4;
        case 0x26a304u: goto label_26a304;
        case 0x26a310u: goto label_26a310;
        case 0x26a320u: goto label_26a320;
        case 0x26a32cu: goto label_26a32c;
        case 0x26a33cu: goto label_26a33c;
        case 0x26a348u: goto label_26a348;
        default: break;
    }

    ctx->pc = 0x26a1b0u;

    // 0x26a1b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26a1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26a1b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26a1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26a1b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26a1bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26a1c0: 0xc064220  jal         func_190880
    ctx->pc = 0x26A1C0u;
    SET_GPR_U32(ctx, 31, 0x26A1C8u);
    ctx->pc = 0x26A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1C0u;
            // 0x26a1c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1C8u; }
        if (ctx->pc != 0x26A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1C8u; }
        if (ctx->pc != 0x26A1C8u) { return; }
    }
    ctx->pc = 0x26A1C8u;
label_26a1c8:
    // 0x26a1c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26a1c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a1cc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A1CCu;
    {
        const bool branch_taken_0x26a1cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1CCu;
            // 0x26a1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1cc) {
            ctx->pc = 0x26A1DCu;
            goto label_26a1dc;
        }
    }
    ctx->pc = 0x26A1D4u;
    // 0x26a1d4: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x26A1D4u;
    {
        const bool branch_taken_0x26a1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1D4u;
            // 0x26a1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1d4) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A1DCu;
label_26a1dc:
    // 0x26a1dc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A1DCu;
    SET_GPR_U32(ctx, 31, 0x26A1E4u);
    ctx->pc = 0x26A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1DCu;
            // 0x26a1e0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1E4u; }
        if (ctx->pc != 0x26A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A1E4u; }
        if (ctx->pc != 0x26A1E4u) { return; }
    }
    ctx->pc = 0x26A1E4u;
label_26a1e4:
    // 0x26a1e4: 0x2c410007  sltiu       $at, $v0, 0x7
    ctx->pc = 0x26a1e4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x26a1e8: 0x10200059  beqz        $at, . + 4 + (0x59 << 2)
    ctx->pc = 0x26A1E8u;
    {
        const bool branch_taken_0x26a1e8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A1E8u;
            // 0x26a1ec: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a1e8) {
            ctx->pc = 0x26A350u;
            goto label_26a350;
        }
    }
    ctx->pc = 0x26A1F0u;
    // 0x26a1f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26a1f4: 0x2463c900  addiu       $v1, $v1, -0x3700
    ctx->pc = 0x26a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953216));
    // 0x26a1f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26a1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26a1fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26a200: 0x400008  jr          $v0
    ctx->pc = 0x26A200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26A208u: goto label_26a208;
            case 0x26A21Cu: goto label_26a21c;
            case 0x26A270u: goto label_26a270;
            case 0x26A2A8u: goto label_26a2a8;
            case 0x26A2FCu: goto label_26a2fc;
            case 0x26A318u: goto label_26a318;
            case 0x26A334u: goto label_26a334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26A208u;
label_26a208:
    // 0x26a208: 0x8e251a08  lw          $a1, 0x1A08($s1)
    ctx->pc = 0x26a208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6664)));
    // 0x26a20c: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A20Cu;
    SET_GPR_U32(ctx, 31, 0x26A214u);
    ctx->pc = 0x26A210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A20Cu;
            // 0x26a210: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A214u; }
        if (ctx->pc != 0x26A214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A214u; }
        if (ctx->pc != 0x26A214u) { return; }
    }
    ctx->pc = 0x26A214u;
label_26a214:
    // 0x26a214: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26A214u;
    {
        const bool branch_taken_0x26a214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A214u;
            // 0x26a218: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a214) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A21Cu;
label_26a21c:
    // 0x26a21c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26a21cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26a220: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a220u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a224: 0x2218821  addu        $s1, $s1, $at
    ctx->pc = 0x26a224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x26a228: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A228u;
    {
        const bool branch_taken_0x26a228 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A228u;
            // 0x26a22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a228) {
            ctx->pc = 0x26A238u;
            goto label_26a238;
        }
    }
    ctx->pc = 0x26A230u;
    // 0x26a230: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x26A230u;
    {
        const bool branch_taken_0x26a230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A230u;
            // 0x26a234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a230) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A238u;
label_26a238:
    // 0x26a238: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A238u;
    SET_GPR_U32(ctx, 31, 0x26A240u);
    ctx->pc = 0x26A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A238u;
            // 0x26a23c: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A240u; }
        if (ctx->pc != 0x26A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A240u; }
        if (ctx->pc != 0x26A240u) { return; }
    }
    ctx->pc = 0x26A240u;
label_26a240:
    // 0x26a240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a244: 0xc0670c0  jal         func_19C300
    ctx->pc = 0x26A244u;
    SET_GPR_U32(ctx, 31, 0x26A24Cu);
    ctx->pc = 0x26A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A244u;
            // 0x26a248: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A24Cu; }
        if (ctx->pc != 0x26A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A24Cu; }
        if (ctx->pc != 0x26A24Cu) { return; }
    }
    ctx->pc = 0x26A24Cu;
label_26a24c:
    // 0x26a24c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A24Cu;
    {
        const bool branch_taken_0x26a24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a24c) {
            ctx->pc = 0x26A25Cu;
            goto label_26a25c;
        }
    }
    ctx->pc = 0x26A254u;
    // 0x26a254: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x26A254u;
    {
        const bool branch_taken_0x26a254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A254u;
            // 0x26a258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a254) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A25Cu;
label_26a25c:
    // 0x26a25c: 0x9045000a  lbu         $a1, 0xA($v0)
    ctx->pc = 0x26a25cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x26a260: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A260u;
    SET_GPR_U32(ctx, 31, 0x26A268u);
    ctx->pc = 0x26A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A260u;
            // 0x26a264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A268u; }
        if (ctx->pc != 0x26A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A268u; }
        if (ctx->pc != 0x26A268u) { return; }
    }
    ctx->pc = 0x26A268u;
label_26a268:
    // 0x26a268: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x26A268u;
    {
        const bool branch_taken_0x26a268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a268) {
            ctx->pc = 0x26A358u;
            goto label_26a358;
        }
    }
    ctx->pc = 0x26A270u;
label_26a270:
    // 0x26a270: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26a270u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26a274: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a274u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a278: 0x2212021  addu        $a0, $s1, $at
    ctx->pc = 0x26a278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x26a27c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A27Cu;
    {
        const bool branch_taken_0x26a27c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A27Cu;
            // 0x26a280: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a27c) {
            ctx->pc = 0x26A28Cu;
            goto label_26a28c;
        }
    }
    ctx->pc = 0x26A284u;
    // 0x26a284: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x26A284u;
    {
        const bool branch_taken_0x26a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A284u;
            // 0x26a288: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a284) {
            ctx->pc = 0x26A360u;
            goto label_26a360;
        }
    }
    ctx->pc = 0x26A28Cu;
label_26a28c:
    // 0x26a28c: 0xc06775c  jal         func_19DD70
    ctx->pc = 0x26A28Cu;
    SET_GPR_U32(ctx, 31, 0x26A294u);
    ctx->pc = 0x19DD70u;
    if (runtime->hasFunction(0x19DD70u)) {
        auto targetFn = runtime->lookupFunction(0x19DD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A294u; }
        if (ctx->pc != 0x26A294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckElectricFish__16CUserDataManagerFv_0x19dd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A294u; }
        if (ctx->pc != 0x26A294u) { return; }
    }
    ctx->pc = 0x26A294u;
label_26a294:
    // 0x26a294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a298: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A298u;
    SET_GPR_U32(ctx, 31, 0x26A2A0u);
    ctx->pc = 0x26A29Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A298u;
            // 0x26a29c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2A0u; }
        if (ctx->pc != 0x26A2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2A0u; }
        if (ctx->pc != 0x26A2A0u) { return; }
    }
    ctx->pc = 0x26A2A0u;
label_26a2a0:
    // 0x26a2a0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x26A2A0u;
    {
        const bool branch_taken_0x26a2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2a0) {
            ctx->pc = 0x26A358u;
            goto label_26a358;
        }
    }
    ctx->pc = 0x26A2A8u;
label_26a2a8:
    // 0x26a2a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a2ac: 0xc097e18  jal         func_25F860
    ctx->pc = 0x26A2ACu;
    SET_GPR_U32(ctx, 31, 0x26A2B4u);
    ctx->pc = 0x26A2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2ACu;
            // 0x26a2b0: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2B4u; }
        if (ctx->pc != 0x26A2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2B4u; }
        if (ctx->pc != 0x26A2B4u) { return; }
    }
    ctx->pc = 0x26A2B4u;
label_26a2b4:
    // 0x26a2b4: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x26a2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x26a2b8: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x26a2b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
    // 0x26a2bc: 0x2212021  addu        $a0, $s1, $at
    ctx->pc = 0x26a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 1)));
    // 0x26a2c0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A2C0u;
    {
        const bool branch_taken_0x26a2c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26A2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2C0u;
            // 0x26a2c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2c0) {
            ctx->pc = 0x26A2D0u;
            goto label_26a2d0;
        }
    }
    ctx->pc = 0x26A2C8u;
    // 0x26a2c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26A2C8u;
    {
        const bool branch_taken_0x26a2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2C8u;
            // 0x26a2cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2c8) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A2D0u;
label_26a2d0:
    // 0x26a2d0: 0xc0673c4  jal         func_19CF10
    ctx->pc = 0x26A2D0u;
    SET_GPR_U32(ctx, 31, 0x26A2D8u);
    ctx->pc = 0x19CF10u;
    if (runtime->hasFunction(0x19CF10u)) {
        auto targetFn = runtime->lookupFunction(0x19CF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2D8u; }
        if (ctx->pc != 0x26A2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFi_0x19cf10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2D8u; }
        if (ctx->pc != 0x26A2D8u) { return; }
    }
    ctx->pc = 0x26A2D8u;
label_26a2d8:
    // 0x26a2d8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26A2D8u;
    {
        const bool branch_taken_0x26a2d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a2d8) {
            ctx->pc = 0x26A2E8u;
            goto label_26a2e8;
        }
    }
    ctx->pc = 0x26A2E0u;
    // 0x26a2e0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x26A2E0u;
    {
        const bool branch_taken_0x26a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2E0u;
            // 0x26a2e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a2e0) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A2E8u;
label_26a2e8:
    // 0x26a2e8: 0x84450002  lh          $a1, 0x2($v0)
    ctx->pc = 0x26a2e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x26a2ec: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A2ECu;
    SET_GPR_U32(ctx, 31, 0x26A2F4u);
    ctx->pc = 0x26A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2ECu;
            // 0x26a2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2F4u; }
        if (ctx->pc != 0x26A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A2F4u; }
        if (ctx->pc != 0x26A2F4u) { return; }
    }
    ctx->pc = 0x26A2F4u;
label_26a2f4:
    // 0x26a2f4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26A2F4u;
    {
        const bool branch_taken_0x26a2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a2f4) {
            ctx->pc = 0x26A358u;
            goto label_26a358;
        }
    }
    ctx->pc = 0x26A2FCu;
label_26a2fc:
    // 0x26a2fc: 0xc0642f8  jal         func_190BE0
    ctx->pc = 0x26A2FCu;
    SET_GPR_U32(ctx, 31, 0x26A304u);
    ctx->pc = 0x26A300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A2FCu;
            // 0x26a300: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A304u; }
        if (ctx->pc != 0x26A304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A304u; }
        if (ctx->pc != 0x26A304u) { return; }
    }
    ctx->pc = 0x26A304u;
label_26a304:
    // 0x26a304: 0x8e251a00  lw          $a1, 0x1A00($s1)
    ctx->pc = 0x26a304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6656)));
    // 0x26a308: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A308u;
    SET_GPR_U32(ctx, 31, 0x26A310u);
    ctx->pc = 0x26A30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A308u;
            // 0x26a30c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A310u; }
        if (ctx->pc != 0x26A310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A310u; }
        if (ctx->pc != 0x26A310u) { return; }
    }
    ctx->pc = 0x26A310u;
label_26a310:
    // 0x26a310: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26A310u;
    {
        const bool branch_taken_0x26a310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a310) {
            ctx->pc = 0x26A358u;
            goto label_26a358;
        }
    }
    ctx->pc = 0x26A318u;
label_26a318:
    // 0x26a318: 0xc0991d8  jal         func_264760
    ctx->pc = 0x26A318u;
    SET_GPR_U32(ctx, 31, 0x26A320u);
    ctx->pc = 0x264760u;
    if (runtime->hasFunction(0x264760u)) {
        auto targetFn = runtime->lookupFunction(0x264760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A320u; }
        if (ctx->pc != 0x26A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetConfigCaptionOff__Fv_0x264760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A320u; }
        if (ctx->pc != 0x26A320u) { return; }
    }
    ctx->pc = 0x26A320u;
label_26a320:
    // 0x26a320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a324: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A324u;
    SET_GPR_U32(ctx, 31, 0x26A32Cu);
    ctx->pc = 0x26A328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A324u;
            // 0x26a328: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A32Cu; }
        if (ctx->pc != 0x26A32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A32Cu; }
        if (ctx->pc != 0x26A32Cu) { return; }
    }
    ctx->pc = 0x26A32Cu;
label_26a32c:
    // 0x26a32c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26A32Cu;
    {
        const bool branch_taken_0x26a32c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a32c) {
            ctx->pc = 0x26A358u;
            goto label_26a358;
        }
    }
    ctx->pc = 0x26A334u;
label_26a334:
    // 0x26a334: 0xc0bdab8  jal         func_2F6AE0
    ctx->pc = 0x26A334u;
    SET_GPR_U32(ctx, 31, 0x26A33Cu);
    ctx->pc = 0x26A338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A334u;
            // 0x26a338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6AE0u;
    if (runtime->hasFunction(0x2F6AE0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A33Cu; }
        if (ctx->pc != 0x26A33Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckNowTourType__9CSaveDataFv_0x2f6ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A33Cu; }
        if (ctx->pc != 0x26A33Cu) { return; }
    }
    ctx->pc = 0x26A33Cu;
label_26a33c:
    // 0x26a33c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26a33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26a340: 0xc097e4c  jal         func_25F930
    ctx->pc = 0x26A340u;
    SET_GPR_U32(ctx, 31, 0x26A348u);
    ctx->pc = 0x26A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26A340u;
            // 0x26a344: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F930u;
    if (runtime->hasFunction(0x25F930u)) {
        auto targetFn = runtime->lookupFunction(0x25F930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A348u; }
        if (ctx->pc != 0x26A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x25f930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26A348u; }
        if (ctx->pc != 0x26A348u) { return; }
    }
    ctx->pc = 0x26A348u;
label_26a348:
    // 0x26a348: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26A348u;
    {
        const bool branch_taken_0x26a348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26a348) {
            ctx->pc = 0x26A358u;
            goto label_26a358;
        }
    }
    ctx->pc = 0x26A350u;
label_26a350:
    // 0x26a350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26A350u;
    {
        const bool branch_taken_0x26a350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26A354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A350u;
            // 0x26a354: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26a350) {
            ctx->pc = 0x26A35Cu;
            goto label_26a35c;
        }
    }
    ctx->pc = 0x26A358u;
label_26a358:
    // 0x26a358: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26a358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26a35c:
    // 0x26a35c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26a35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26a360:
    // 0x26a360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26a360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26a364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26a364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a368: 0x3e00008  jr          $ra
    ctx->pc = 0x26A368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26A368u;
            // 0x26a36c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26A370u;
}
