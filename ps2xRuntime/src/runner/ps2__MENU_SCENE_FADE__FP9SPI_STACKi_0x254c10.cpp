#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_SCENE_FADE__FP9SPI_STACKi
// Address: 0x254c10 - 0x254cbc
void ps2__MENU_SCENE_FADE__FP9SPI_STACKi_0x254c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_SCENE_FADE__FP9SPI_STACKi_0x254c10");
#endif

    switch (ctx->pc) {
        case 0x254c40u: goto label_254c40;
        case 0x254c58u: goto label_254c58;
        case 0x254c70u: goto label_254c70;
        case 0x254c94u: goto label_254c94;
        case 0x254ca0u: goto label_254ca0;
        default: break;
    }

    ctx->pc = 0x254c10u;

    // 0x254c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x254c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x254c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x254c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x254c18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x254c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x254c1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x254c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x254c20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x254c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x254c24: 0x938297d8  lbu         $v0, -0x6828($gp)
    ctx->pc = 0x254c24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940632)));
    // 0x254c28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x254C28u;
    {
        const bool branch_taken_0x254c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C28u;
            // 0x254c2c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c28) {
            ctx->pc = 0x254C38u;
            goto label_254c38;
        }
    }
    ctx->pc = 0x254C30u;
    // 0x254c30: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x254C30u;
    {
        const bool branch_taken_0x254c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C30u;
            // 0x254c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c30) {
            ctx->pc = 0x254CA4u;
            goto label_254ca4;
        }
    }
    ctx->pc = 0x254C38u;
label_254c38:
    // 0x254c38: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254C38u;
    SET_GPR_U32(ctx, 31, 0x254C40u);
    ctx->pc = 0x254C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254C38u;
            // 0x254c3c: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C40u; }
        if (ctx->pc != 0x254C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C40u; }
        if (ctx->pc != 0x254C40u) { return; }
    }
    ctx->pc = 0x254C40u;
label_254c40:
    // 0x254c40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x254c40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x254c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x254c48: 0x16230003  bne         $s1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x254C48u;
    {
        const bool branch_taken_0x254c48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x254C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C48u;
            // 0x254c4c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c48) {
            ctx->pc = 0x254C58u;
            goto label_254c58;
        }
    }
    ctx->pc = 0x254C50u;
    // 0x254c50: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x254C50u;
    SET_GPR_U32(ctx, 31, 0x254C58u);
    ctx->pc = 0x254C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254C50u;
            // 0x254c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C58u; }
        if (ctx->pc != 0x254C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C58u; }
        if (ctx->pc != 0x254C58u) { return; }
    }
    ctx->pc = 0x254C58u;
label_254c58:
    // 0x254c58: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x254C58u;
    {
        const bool branch_taken_0x254c58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C58u;
            // 0x254c5c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c58) {
            ctx->pc = 0x254C78u;
            goto label_254c78;
        }
    }
    ctx->pc = 0x254C60u;
    // 0x254c60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x254c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254c64: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x254c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x254c68: 0xc05f5fc  jal         func_17D7F0
    ctx->pc = 0x254C68u;
    SET_GPR_U32(ctx, 31, 0x254C70u);
    ctx->pc = 0x254C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254C68u;
            // 0x254c6c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C70u; }
        if (ctx->pc != 0x254C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C70u; }
        if (ctx->pc != 0x254C70u) { return; }
    }
    ctx->pc = 0x254C70u;
label_254c70:
    // 0x254c70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x254C70u;
    {
        const bool branch_taken_0x254c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254C70u;
            // 0x254c74: 0x8f8294a4  lw          $v0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254c70) {
            ctx->pc = 0x254C98u;
            goto label_254c98;
        }
    }
    ctx->pc = 0x254C78u;
label_254c78:
    // 0x254c78: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x254c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x254c7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x254c7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x254c80: 0x0  nop
    ctx->pc = 0x254c80u;
    // NOP
    // 0x254c84: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x254c84u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x254c88: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x254c88u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x254c8c: 0xc05f610  jal         func_17D840
    ctx->pc = 0x254C8Cu;
    SET_GPR_U32(ctx, 31, 0x254C94u);
    ctx->pc = 0x254C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254C8Cu;
            // 0x254c90: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D840u;
    if (runtime->hasFunction(0x17D840u)) {
        auto targetFn = runtime->lookupFunction(0x17D840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C94u; }
        if (ctx->pc != 0x254C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOut__10CFadeInOutFifff_0x17d840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254C94u; }
        if (ctx->pc != 0x254C94u) { return; }
    }
    ctx->pc = 0x254C94u;
label_254c94:
    // 0x254c94: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x254c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_254c98:
    // 0x254c98: 0xc05f664  jal         func_17D990
    ctx->pc = 0x254C98u;
    SET_GPR_U32(ctx, 31, 0x254CA0u);
    ctx->pc = 0x254C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x254C98u;
            // 0x254c9c: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D990u;
    if (runtime->hasFunction(0x17D990u)) {
        auto targetFn = runtime->lookupFunction(0x17D990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CA0u; }
        if (ctx->pc != 0x254CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeStep__10CFadeInOutFv_0x17d990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x254CA0u; }
        if (ctx->pc != 0x254CA0u) { return; }
    }
    ctx->pc = 0x254CA0u;
label_254ca0:
    // 0x254ca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x254ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254ca4:
    // 0x254ca4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x254ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x254ca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x254ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254cac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x254cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254cb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x254cb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x254CB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x254CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x254CB4u;
            // 0x254cb8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x254CBCu;
}
