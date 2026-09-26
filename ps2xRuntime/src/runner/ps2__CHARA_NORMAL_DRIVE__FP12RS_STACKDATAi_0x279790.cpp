#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CHARA_NORMAL_DRIVE__FP12RS_STACKDATAi
// Address: 0x279790 - 0x2797d8
void ps2__CHARA_NORMAL_DRIVE__FP12RS_STACKDATAi_0x279790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CHARA_NORMAL_DRIVE__FP12RS_STACKDATAi_0x279790");
#endif

    switch (ctx->pc) {
        case 0x279790u: goto label_279790;
        case 0x279794u: goto label_279794;
        case 0x279798u: goto label_279798;
        case 0x27979cu: goto label_27979c;
        case 0x2797a0u: goto label_2797a0;
        case 0x2797a4u: goto label_2797a4;
        case 0x2797a8u: goto label_2797a8;
        case 0x2797acu: goto label_2797ac;
        case 0x2797b0u: goto label_2797b0;
        case 0x2797b4u: goto label_2797b4;
        case 0x2797b8u: goto label_2797b8;
        case 0x2797bcu: goto label_2797bc;
        case 0x2797c0u: goto label_2797c0;
        case 0x2797c4u: goto label_2797c4;
        case 0x2797c8u: goto label_2797c8;
        case 0x2797ccu: goto label_2797cc;
        case 0x2797d0u: goto label_2797d0;
        case 0x2797d4u: goto label_2797d4;
        default: break;
    }

    ctx->pc = 0x279790u;

label_279790:
    // 0x279790: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_279794:
    // 0x279794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_279798:
    // 0x279798: 0xc097e18  jal         func_25F860
label_27979c:
    if (ctx->pc == 0x27979Cu) {
        ctx->pc = 0x2797A0u;
        goto label_2797a0;
    }
    ctx->pc = 0x279798u;
    SET_GPR_U32(ctx, 31, 0x2797A0u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797A0u; }
        if (ctx->pc != 0x2797A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797A0u; }
        if (ctx->pc != 0x2797A0u) { return; }
    }
    ctx->pc = 0x2797A0u;
label_2797a0:
    // 0x2797a0: 0xc0956d4  jal         func_255B50
label_2797a4:
    if (ctx->pc == 0x2797A4u) {
        ctx->pc = 0x2797A4u;
            // 0x2797a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2797A8u;
        goto label_2797a8;
    }
    ctx->pc = 0x2797A0u;
    SET_GPR_U32(ctx, 31, 0x2797A8u);
    ctx->pc = 0x2797A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2797A0u;
            // 0x2797a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797A8u; }
        if (ctx->pc != 0x2797A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2797A8u; }
        if (ctx->pc != 0x2797A8u) { return; }
    }
    ctx->pc = 0x2797A8u;
label_2797a8:
    // 0x2797a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2797ac:
    if (ctx->pc == 0x2797ACu) {
        ctx->pc = 0x2797B0u;
        goto label_2797b0;
    }
    ctx->pc = 0x2797A8u;
    {
        const bool branch_taken_0x2797a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2797a8) {
            ctx->pc = 0x2797B8u;
            goto label_2797b8;
        }
    }
    ctx->pc = 0x2797B0u;
label_2797b0:
    // 0x2797b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2797b4:
    if (ctx->pc == 0x2797B4u) {
        ctx->pc = 0x2797B4u;
            // 0x2797b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2797B8u;
        goto label_2797b8;
    }
    ctx->pc = 0x2797B0u;
    {
        const bool branch_taken_0x2797b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2797B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2797B0u;
            // 0x2797b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2797b0) {
            ctx->pc = 0x2797CCu;
            goto label_2797cc;
        }
    }
    ctx->pc = 0x2797B8u;
label_2797b8:
    // 0x2797b8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2797b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2797bc:
    // 0x2797bc: 0x8f3900d0  lw          $t9, 0xD0($t9)
    ctx->pc = 0x2797bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 208)));
label_2797c0:
    // 0x2797c0: 0x320f809  jalr        $t9
label_2797c4:
    if (ctx->pc == 0x2797C4u) {
        ctx->pc = 0x2797C4u;
            // 0x2797c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2797C8u;
        goto label_2797c8;
    }
    ctx->pc = 0x2797C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2797C8u);
        ctx->pc = 0x2797C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2797C0u;
            // 0x2797c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2797C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2797C8u; }
            if (ctx->pc != 0x2797C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2797C8u;
label_2797c8:
    // 0x2797c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2797c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2797cc:
    // 0x2797cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2797ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2797d0:
    // 0x2797d0: 0x3e00008  jr          $ra
label_2797d4:
    if (ctx->pc == 0x2797D4u) {
        ctx->pc = 0x2797D4u;
            // 0x2797d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2797D8u;
        goto label_fallthrough_0x2797d0;
    }
    ctx->pc = 0x2797D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2797D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2797D0u;
            // 0x2797d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2797d0:
    ctx->pc = 0x2797D8u;
}
