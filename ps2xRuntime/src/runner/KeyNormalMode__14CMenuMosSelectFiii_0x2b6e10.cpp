#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: KeyNormalMode__14CMenuMosSelectFiii
// Address: 0x2b6e10 - 0x2b6ed0
void KeyNormalMode__14CMenuMosSelectFiii_0x2b6e10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("KeyNormalMode__14CMenuMosSelectFiii_0x2b6e10");
#endif

    switch (ctx->pc) {
        case 0x2b6e4cu: goto label_2b6e4c;
        case 0x2b6eb8u: goto label_2b6eb8;
        default: break;
    }

    ctx->pc = 0x2b6e10u;

    // 0x2b6e10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6e14: 0x3c090035  lui         $t1, 0x35
    ctx->pc = 0x2b6e14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)53 << 16));
    // 0x2b6e18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b6e1c: 0x278784b0  addiu       $a3, $gp, -0x7B50
    ctx->pc = 0x2b6e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935728));
    // 0x2b6e20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b6e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b6e24: 0x278884b8  addiu       $t0, $gp, -0x7B48
    ctx->pc = 0x2b6e24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935736));
    // 0x2b6e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6e2c: 0x25294b20  addiu       $t1, $t1, 0x4B20
    ctx->pc = 0x2b6e2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 19232));
    // 0x2b6e30: 0x8c910138  lw          $s1, 0x138($a0)
    ctx->pc = 0x2b6e30u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 312)));
    // 0x2b6e34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6e34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e38: 0x2606013c  addiu       $a2, $s0, 0x13C
    ctx->pc = 0x2b6e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 316));
    // 0x2b6e3c: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x2b6e3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2b6e40: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2b6e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6e44: 0xc08ed0c  jal         func_23B430
    ctx->pc = 0x2B6E44u;
    SET_GPR_U32(ctx, 31, 0x2B6E4Cu);
    ctx->pc = 0x2B6E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E44u;
            // 0x2b6e48: 0x26050138  addiu       $a1, $s0, 0x138 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B430u;
    if (runtime->hasFunction(0x23B430u)) {
        auto targetFn = runtime->lookupFunction(0x23B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E4Cu; }
        if (ctx->pc != 0x2B6E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGlidKeyCheck__FiPiPiPiPiPii_0x23b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6E4Cu; }
        if (ctx->pc != 0x2B6E4Cu) { return; }
    }
    ctx->pc = 0x2B6E4Cu;
label_2b6e4c:
    // 0x2b6e4c: 0x8e020138  lw          $v0, 0x138($s0)
    ctx->pc = 0x2b6e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2b6e50: 0x12220019  beq         $s1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2B6E50u;
    {
        const bool branch_taken_0x2b6e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6e50) {
            ctx->pc = 0x2B6EB8u;
            goto label_2b6eb8;
        }
    }
    ctx->pc = 0x2B6E58u;
    // 0x2b6e58: 0xa3809b77  sb          $zero, -0x6489($gp)
    ctx->pc = 0x2b6e58u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941559), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6e5c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6e60: 0xae02465c  sw          $v0, 0x465C($s0)
    ctx->pc = 0x2b6e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18012), GPR_U32(ctx, 2));
    // 0x2b6e64: 0x8e040138  lw          $a0, 0x138($s0)
    ctx->pc = 0x2b6e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2b6e68: 0x2881000a  slti        $at, $a0, 0xA
    ctx->pc = 0x2b6e68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2b6e6c: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2B6E6Cu;
    {
        const bool branch_taken_0x2b6e6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e6c) {
            ctx->pc = 0x2B6EACu;
            goto label_2b6eac;
        }
    }
    ctx->pc = 0x2B6E74u;
    // 0x2b6e74: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x2b6e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2b6e78: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x2b6e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x2b6e7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b6e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6e80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b6e80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2b6e84: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x2b6e84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6e88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b6e88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b6e8c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2b6e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2b6e90: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6E90u;
    {
        const bool branch_taken_0x2b6e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6E90u;
            // 0x2b6e94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e90) {
            ctx->pc = 0x2B6EB0u;
            goto label_2b6eb0;
        }
    }
    ctx->pc = 0x2B6E98u;
    // 0x2b6e98: 0x9062000a  lbu         $v0, 0xA($v1)
    ctx->pc = 0x2b6e98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x2b6e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6E9Cu;
    {
        const bool branch_taken_0x2b6e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e9c) {
            ctx->pc = 0x2B6EACu;
            goto label_2b6eac;
        }
    }
    ctx->pc = 0x2B6EA4u;
    // 0x2b6ea4: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x2b6ea4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2b6ea8: 0xae02465c  sw          $v0, 0x465C($s0)
    ctx->pc = 0x2b6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18012), GPR_U32(ctx, 2));
label_2b6eac:
    // 0x2b6eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b6eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b6eb0:
    // 0x2b6eb0: 0xc094274  jal         func_2509D0
    ctx->pc = 0x2B6EB0u;
    SET_GPR_U32(ctx, 31, 0x2B6EB8u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EB8u; }
        if (ctx->pc != 0x2B6EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6EB8u; }
        if (ctx->pc != 0x2B6EB8u) { return; }
    }
    ctx->pc = 0x2B6EB8u;
label_2b6eb8:
    // 0x2b6eb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b6eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6ebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6ec0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b6ec0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6ec4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6EC8u;
            // 0x2b6ecc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6ED0u;
}
