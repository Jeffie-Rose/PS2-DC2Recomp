#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkTextureRepeat__F10sceGsClamp
// Address: 0x143b60 - 0x143bd4
void mgSetPkTextureRepeat__F10sceGsClamp_0x143b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkTextureRepeat__F10sceGsClamp_0x143b60");
#endif

    switch (ctx->pc) {
        case 0x143b80u: goto label_143b80;
        case 0x143b8cu: goto label_143b8c;
        case 0x143ba0u: goto label_143ba0;
        case 0x143bb4u: goto label_143bb4;
        case 0x143bbcu: goto label_143bbc;
        case 0x143bc4u: goto label_143bc4;
        default: break;
    }

    ctx->pc = 0x143b60u;

    // 0x143b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143b64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143b70: 0xffa40028  sd          $a0, 0x28($sp)
    ctx->pc = 0x143b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 4));
    // 0x143b74: 0x8f848774  lw          $a0, -0x788C($gp)
    ctx->pc = 0x143b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936436)));
    // 0x143b78: 0xc041ae4  jal         func_106B90
    ctx->pc = 0x143B78u;
    SET_GPR_U32(ctx, 31, 0x143B80u);
    ctx->pc = 0x143B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B78u;
            // 0x143b7c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106B90u;
    if (runtime->hasFunction(0x106B90u)) {
        auto targetFn = runtime->lookupFunction(0x106B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B80u; }
        if (ctx->pc != 0x143B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCnt_0x106b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B80u; }
        if (ctx->pc != 0x143B80u) { return; }
    }
    ctx->pc = 0x143B80u;
label_143b80:
    // 0x143b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b84: 0xc041b2c  jal         func_106CB0
    ctx->pc = 0x143B84u;
    SET_GPR_U32(ctx, 31, 0x143B8Cu);
    ctx->pc = 0x143B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B84u;
            // 0x143b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106CB0u;
    if (runtime->hasFunction(0x106CB0u)) {
        auto targetFn = runtime->lookupFunction(0x106CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B8Cu; }
        if (ctx->pc != 0x143B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenDirectCode_0x106cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B8Cu; }
        if (ctx->pc != 0x143B8Cu) { return; }
    }
    ctx->pc = 0x143B8Cu;
label_143b8c:
    // 0x143b8c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x143b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x143b90: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x143b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
    // 0x143b94: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x143b94u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143b98: 0xc041b4e  jal         func_106D38
    ctx->pc = 0x143B98u;
    SET_GPR_U32(ctx, 31, 0x143BA0u);
    ctx->pc = 0x143B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B98u;
            // 0x143b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D38u;
    if (runtime->hasFunction(0x106D38u)) {
        auto targetFn = runtime->lookupFunction(0x106D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BA0u; }
        if (ctx->pc != 0x143BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkOpenGifTag_0x106d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BA0u; }
        if (ctx->pc != 0x143BA0u) { return; }
    }
    ctx->pc = 0x143BA0u;
label_143ba0:
    // 0x143ba0: 0x27a20028  addiu       $v0, $sp, 0x28
    ctx->pc = 0x143ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x143ba4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ba8: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x143ba8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143bac: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x143BACu;
    SET_GPR_U32(ctx, 31, 0x143BB4u);
    ctx->pc = 0x143BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BACu;
            // 0x143bb0: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106E90u;
    if (runtime->hasFunction(0x106E90u)) {
        auto targetFn = runtime->lookupFunction(0x106E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BB4u; }
        if (ctx->pc != 0x143BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkAddGsAD_0x106e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BB4u; }
        if (ctx->pc != 0x143BB4u) { return; }
    }
    ctx->pc = 0x143BB4u;
label_143bb4:
    // 0x143bb4: 0xc041b54  jal         func_106D50
    ctx->pc = 0x143BB4u;
    SET_GPR_U32(ctx, 31, 0x143BBCu);
    ctx->pc = 0x143BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BB4u;
            // 0x143bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D50u;
    if (runtime->hasFunction(0x106D50u)) {
        auto targetFn = runtime->lookupFunction(0x106D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BBCu; }
        if (ctx->pc != 0x143BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseGifTag_0x106d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BBCu; }
        if (ctx->pc != 0x143BBCu) { return; }
    }
    ctx->pc = 0x143BBCu;
label_143bbc:
    // 0x143bbc: 0xc041b42  jal         func_106D08
    ctx->pc = 0x143BBCu;
    SET_GPR_U32(ctx, 31, 0x143BC4u);
    ctx->pc = 0x143BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143BBCu;
            // 0x143bc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106D08u;
    if (runtime->hasFunction(0x106D08u)) {
        auto targetFn = runtime->lookupFunction(0x106D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BC4u; }
        if (ctx->pc != 0x143BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCloseDirectCode_0x106d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143BC4u; }
        if (ctx->pc != 0x143BC4u) { return; }
    }
    ctx->pc = 0x143BC4u;
label_143bc4:
    // 0x143bc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143bc8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x143BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143BCCu;
            // 0x143bd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143BD4u;
}
