#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _OBJS_SET_SCALE__FP12RS_STACKDATAi
// Address: 0x272560 - 0x27261c
void ps2__OBJS_SET_SCALE__FP12RS_STACKDATAi_0x272560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__OBJS_SET_SCALE__FP12RS_STACKDATAi_0x272560");
#endif

    switch (ctx->pc) {
        case 0x272588u: goto label_272588;
        case 0x272598u: goto label_272598;
        case 0x2725a8u: goto label_2725a8;
        case 0x2725b8u: goto label_2725b8;
        case 0x2725d4u: goto label_2725d4;
        case 0x2725e0u: goto label_2725e0;
        case 0x2725fcu: goto label_2725fc;
        default: break;
    }

    ctx->pc = 0x272560u;

    // 0x272560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x272560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x272564: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x272564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x272568: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x272568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27256c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x272570: 0x24930008  addiu       $s3, $a0, 0x8
    ctx->pc = 0x272570u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x272574: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x272574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x272578: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x272578u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27257c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27257cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x272580: 0xc097e18  jal         func_25F860
    ctx->pc = 0x272580u;
    SET_GPR_U32(ctx, 31, 0x272588u);
    ctx->pc = 0x272584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272580u;
            // 0x272584: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272588u; }
        if (ctx->pc != 0x272588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272588u; }
        if (ctx->pc != 0x272588u) { return; }
    }
    ctx->pc = 0x272588u;
label_272588:
    // 0x272588: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27258c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27258cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272590: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x272590u;
    SET_GPR_U32(ctx, 31, 0x272598u);
    ctx->pc = 0x272594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x272590u;
            // 0x272594: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272598u; }
        if (ctx->pc != 0x272598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x272598u; }
        if (ctx->pc != 0x272598u) { return; }
    }
    ctx->pc = 0x272598u;
label_272598:
    // 0x272598: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x272598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27259c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x27259cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2725a0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2725A0u;
    SET_GPR_U32(ctx, 31, 0x2725A8u);
    ctx->pc = 0x2725A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2725A0u;
            // 0x2725a4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725A8u; }
        if (ctx->pc != 0x2725A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725A8u; }
        if (ctx->pc != 0x2725A8u) { return; }
    }
    ctx->pc = 0x2725A8u;
label_2725a8:
    // 0x2725a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2725a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725ac: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x2725acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2725b0: 0xc097e28  jal         func_25F8A0
    ctx->pc = 0x2725B0u;
    SET_GPR_U32(ctx, 31, 0x2725B8u);
    ctx->pc = 0x2725B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2725B0u;
            // 0x2725b4: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F8A0u;
    if (runtime->hasFunction(0x25F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x25F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725B8u; }
        if (ctx->pc != 0x2725B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x25f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725B8u; }
        if (ctx->pc != 0x2725B8u) { return; }
    }
    ctx->pc = 0x2725B8u;
label_2725b8:
    // 0x2725b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2725b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2725bc: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x2725bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x2725c0: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2725c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2725c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2725C4u;
    {
        const bool branch_taken_0x2725c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725C4u;
            // 0x2725c8: 0xafa3005c  sw          $v1, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725c4) {
            ctx->pc = 0x2725D8u;
            goto label_2725d8;
        }
    }
    ctx->pc = 0x2725CCu;
    // 0x2725cc: 0xc097e18  jal         func_25F860
    ctx->pc = 0x2725CCu;
    SET_GPR_U32(ctx, 31, 0x2725D4u);
    ctx->pc = 0x2725D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2725CCu;
            // 0x2725d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725D4u; }
        if (ctx->pc != 0x2725D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725D4u; }
        if (ctx->pc != 0x2725D4u) { return; }
    }
    ctx->pc = 0x2725D4u;
label_2725d4:
    // 0x2725d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2725d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2725d8:
    // 0x2725d8: 0xc098a44  jal         func_262910
    ctx->pc = 0x2725D8u;
    SET_GPR_U32(ctx, 31, 0x2725E0u);
    ctx->pc = 0x2725DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2725D8u;
            // 0x2725dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262910u;
    if (runtime->hasFunction(0x262910u)) {
        auto targetFn = runtime->lookupFunction(0x262910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725E0u; }
        if (ctx->pc != 0x2725E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetObjSeq__Fi_0x262910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725E0u; }
        if (ctx->pc != 0x2725E0u) { return; }
    }
    ctx->pc = 0x2725E0u;
label_2725e0:
    // 0x2725e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2725E0u;
    {
        const bool branch_taken_0x2725e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2725E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725E0u;
            // 0x2725e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725e0) {
            ctx->pc = 0x2725F0u;
            goto label_2725f0;
        }
    }
    ctx->pc = 0x2725E8u;
    // 0x2725e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2725E8u;
    {
        const bool branch_taken_0x2725e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2725ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2725E8u;
            // 0x2725ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2725e8) {
            ctx->pc = 0x272600u;
            goto label_272600;
        }
    }
    ctx->pc = 0x2725F0u;
label_2725f0:
    // 0x2725f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2725f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2725f4: 0xc0974e4  jal         func_25D390
    ctx->pc = 0x2725F4u;
    SET_GPR_U32(ctx, 31, 0x2725FCu);
    ctx->pc = 0x2725F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2725F4u;
            // 0x2725f8: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D390u;
    if (runtime->hasFunction(0x25D390u)) {
        auto targetFn = runtime->lookupFunction(0x25D390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725FCu; }
        if (ctx->pc != 0x2725FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScale__12CSceneObjSeqFPfi_0x25d390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2725FCu; }
        if (ctx->pc != 0x2725FCu) { return; }
    }
    ctx->pc = 0x2725FCu;
label_2725fc:
    // 0x2725fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2725fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272600:
    // 0x272600: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x272600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x272604: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x272604u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x272608: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x272608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27260c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27260cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x272610: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x272610u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x272614: 0x3e00008  jr          $ra
    ctx->pc = 0x272614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x272614u;
            // 0x272618: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27261Cu;
}
