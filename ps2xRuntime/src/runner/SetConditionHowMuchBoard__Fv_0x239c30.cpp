#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetConditionHowMuchBoard__Fv
// Address: 0x239c30 - 0x239cf0
void SetConditionHowMuchBoard__Fv_0x239c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetConditionHowMuchBoard__Fv_0x239c30");
#endif

    switch (ctx->pc) {
        case 0x239c70u: goto label_239c70;
        default: break;
    }

    ctx->pc = 0x239c30u;

    // 0x239c30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x239c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x239c38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239c38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x239c3c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x239c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239c40: 0x8c700140  lw          $s0, 0x140($v1)
    ctx->pc = 0x239c40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x239c44: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x239C44u;
    {
        const bool branch_taken_0x239c44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239c44) {
            ctx->pc = 0x239CE0u;
            goto label_239ce0;
        }
    }
    ctx->pc = 0x239C4Cu;
    // 0x239c4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x239c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x239c50: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x239c50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x239c54: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239c58: 0xa440005e  sh          $zero, 0x5E($v0)
    ctx->pc = 0x239c58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 94), (uint16_t)GPR_U32(ctx, 0));
    // 0x239c5c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x239c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239c60: 0xa440005c  sh          $zero, 0x5C($v0)
    ctx->pc = 0x239c60u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x239c64: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x239c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x239c68: 0xc08f0b0  jal         func_23C2C0
    ctx->pc = 0x239C68u;
    SET_GPR_U32(ctx, 31, 0x239C70u);
    ctx->pc = 0x239C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239C68u;
            // 0x239c6c: 0x27a50028  addiu       $a1, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C2C0u;
    if (runtime->hasFunction(0x23C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x23C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C70u; }
        if (ctx->pc != 0x239C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCursorPos__12CMenuKeyFuncFPi_0x23c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239C70u; }
        if (ctx->pc != 0x239C70u) { return; }
    }
    ctx->pc = 0x239C70u;
label_239c70:
    // 0x239c70: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239c74: 0x3c07c100  lui         $a3, 0xC100
    ctx->pc = 0x239c74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49408 << 16));
    // 0x239c78: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x239c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x239c7c: 0x3c054200  lui         $a1, 0x4200
    ctx->pc = 0x239c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16896 << 16));
    // 0x239c80: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x239c80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
    // 0x239c84: 0xac670020  sw          $a3, 0x20($v1)
    ctx->pc = 0x239c84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 7));
    // 0x239c88: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239c8c: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x239c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x239c90: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239c94: 0xac6500b0  sw          $a1, 0xB0($v1)
    ctx->pc = 0x239c94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 5));
    // 0x239c98: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239c9c: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x239c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x239ca0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x239ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x239ca4: 0x28610141  slti        $at, $v1, 0x141
    ctx->pc = 0x239ca4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)321) ? 1 : 0);
    // 0x239ca8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x239CA8u;
    {
        const bool branch_taken_0x239ca8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x239ca8) {
            ctx->pc = 0x239CE0u;
            goto label_239ce0;
        }
    }
    ctx->pc = 0x239CB0u;
    // 0x239cb0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239cb4: 0x3c07c2c4  lui         $a3, 0xC2C4
    ctx->pc = 0x239cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)49860 << 16));
    // 0x239cb8: 0x3c06c2b0  lui         $a2, 0xC2B0
    ctx->pc = 0x239cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49840 << 16));
    // 0x239cbc: 0x3c05c268  lui         $a1, 0xC268
    ctx->pc = 0x239cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49768 << 16));
    // 0x239cc0: 0x3c04c2a0  lui         $a0, 0xC2A0
    ctx->pc = 0x239cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49824 << 16));
    // 0x239cc4: 0xac670020  sw          $a3, 0x20($v1)
    ctx->pc = 0x239cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 7));
    // 0x239cc8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239ccc: 0xac660068  sw          $a2, 0x68($v1)
    ctx->pc = 0x239cccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 6));
    // 0x239cd0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239cd4: 0xac6500b0  sw          $a1, 0xB0($v1)
    ctx->pc = 0x239cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 176), GPR_U32(ctx, 5));
    // 0x239cd8: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x239cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x239cdc: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x239cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
label_239ce0:
    // 0x239ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x239ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239ce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x239ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x239CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239CE8u;
            // 0x239cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239CF0u;
}
