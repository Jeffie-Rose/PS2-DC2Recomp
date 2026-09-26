#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcCursorPosition__14CMenuMosSelectFv
// Address: 0x2b6ae0 - 0x2b6ba8
void CalcCursorPosition__14CMenuMosSelectFv_0x2b6ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcCursorPosition__14CMenuMosSelectFv_0x2b6ae0");
#endif

    switch (ctx->pc) {
        case 0x2b6b50u: goto label_2b6b50;
        case 0x2b6b78u: goto label_2b6b78;
        case 0x2b6b94u: goto label_2b6b94;
        default: break;
    }

    ctx->pc = 0x2b6ae0u;

    // 0x2b6ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6ae4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6ae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6af4: 0x8023dc22  lb          $v1, -0x23DE($at)
    ctx->pc = 0x2b6af4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958114)));
    // 0x2b6af8: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6AF8u;
    {
        const bool branch_taken_0x2b6af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AF8u;
            // 0x2b6afc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6af8) {
            ctx->pc = 0x2B6B3Cu;
            goto label_2b6b3c;
        }
    }
    ctx->pc = 0x2B6B00u;
    // 0x2b6b00: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2b6b00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2b6b04: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x2b6b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x2b6b08: 0x8024dc23  lb          $a0, -0x23DD($at)
    ctx->pc = 0x2b6b08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294958115)));
    // 0x2b6b0c: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2b6b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x2b6b10: 0x2463df28  addiu       $v1, $v1, -0x20D8
    ctx->pc = 0x2b6b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958888));
    // 0x2b6b14: 0x2442df2a  addiu       $v0, $v0, -0x20D6
    ctx->pc = 0x2b6b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958890));
    // 0x2b6b18: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2b6b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b6b1c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2b6b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b6b20: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2b6b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2b6b24: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x2b6b24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b6b28: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x2b6b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x2b6b2c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2b6b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2b6b30: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2b6b30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b6b34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B6B34u;
    {
        const bool branch_taken_0x2b6b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B34u;
            // 0x2b6b38: 0xafa2002c  sw          $v0, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6b34) {
            ctx->pc = 0x2B6B68u;
            goto label_2b6b68;
        }
    }
    ctx->pc = 0x2B6B3Cu;
label_2b6b3c:
    // 0x2b6b3c: 0x8e044670  lw          $a0, 0x4670($s0)
    ctx->pc = 0x2b6b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18032)));
    // 0x2b6b40: 0x8e050138  lw          $a1, 0x138($s0)
    ctx->pc = 0x2b6b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x2b6b44: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x2b6b44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x2b6b48: 0xc0adaa0  jal         func_2B6A80
    ctx->pc = 0x2B6B48u;
    SET_GPR_U32(ctx, 31, 0x2B6B50u);
    ctx->pc = 0x2B6B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B48u;
            // 0x2b6b4c: 0x27a70028  addiu       $a3, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B6A80u;
    if (runtime->hasFunction(0x2B6A80u)) {
        auto targetFn = runtime->lookupFunction(0x2B6A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B50u; }
        if (ctx->pc != 0x2B6B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBajjiPosition__FP16CMenuPosDataFormiiPi_0x2b6a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B50u; }
        if (ctx->pc != 0x2B6B50u) { return; }
    }
    ctx->pc = 0x2B6B50u;
label_2b6b50:
    // 0x2b6b50: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2b6b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b6b54: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2b6b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2b6b58: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x2b6b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x2b6b5c: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2b6b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
    // 0x2b6b60: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x2b6b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x2b6b64: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x2b6b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_2b6b68:
    // 0x2b6b68: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2b6b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2b6b6c: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x2b6b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x2b6b70: 0xc08ef88  jal         func_23BE20
    ctx->pc = 0x2B6B70u;
    SET_GPR_U32(ctx, 31, 0x2B6B78u);
    ctx->pc = 0x2B6B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B70u;
            // 0x2b6b74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BE20u;
    if (runtime->hasFunction(0x23BE20u)) {
        auto targetFn = runtime->lookupFunction(0x23BE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B78u; }
        if (ctx->pc != 0x2B6B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosStep__12CMenuKeyFuncFPiPi_0x23be20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B78u; }
        if (ctx->pc != 0x2B6B78u) { return; }
    }
    ctx->pc = 0x2B6B78u;
label_2b6b78:
    // 0x2b6b78: 0x8e034610  lw          $v1, 0x4610($s0)
    ctx->pc = 0x2b6b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17936)));
    // 0x2b6b7c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6B7Cu;
    {
        const bool branch_taken_0x2b6b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6b7c) {
            ctx->pc = 0x2B6B98u;
            goto label_2b6b98;
        }
    }
    ctx->pc = 0x2B6B84u;
    // 0x2b6b84: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2b6b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2b6b88: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x2b6b88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x2b6b8c: 0xc08f000  jal         func_23C000
    ctx->pc = 0x2B6B8Cu;
    SET_GPR_U32(ctx, 31, 0x2B6B94u);
    ctx->pc = 0x2B6B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6B8Cu;
            // 0x2b6b90: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B94u; }
        if (ctx->pc != 0x2B6B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6B94u; }
        if (ctx->pc != 0x2B6B94u) { return; }
    }
    ctx->pc = 0x2B6B94u;
label_2b6b94:
    // 0x2b6b94: 0xae004610  sw          $zero, 0x4610($s0)
    ctx->pc = 0x2b6b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17936), GPR_U32(ctx, 0));
label_2b6b98:
    // 0x2b6b98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6b98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6BA0u;
            // 0x2b6ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6BA8u;
}
