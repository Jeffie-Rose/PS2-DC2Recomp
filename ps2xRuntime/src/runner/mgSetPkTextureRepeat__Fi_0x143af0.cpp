#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgSetPkTextureRepeat__Fi
// Address: 0x143af0 - 0x143b60
void mgSetPkTextureRepeat__Fi_0x143af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgSetPkTextureRepeat__Fi_0x143af0");
#endif

    switch (ctx->pc) {
        case 0x143b10u: goto label_143b10;
        case 0x143b50u: goto label_143b50;
        default: break;
    }

    ctx->pc = 0x143af0u;

    // 0x143af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x143af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143af8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x143afc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x143afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x143b00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x143b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b08: 0xc049c86  jal         func_127218
    ctx->pc = 0x143B08u;
    SET_GPR_U32(ctx, 31, 0x143B10u);
    ctx->pc = 0x143B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B08u;
            // 0x143b0c: 0x27a40028  addiu       $a0, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B10u; }
        if (ctx->pc != 0x143B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B10u; }
        if (ctx->pc != 0x143B10u) { return; }
    }
    ctx->pc = 0x143B10u;
label_143b10:
    // 0x143b10: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x143B10u;
    {
        const bool branch_taken_0x143b10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x143b10) {
            ctx->pc = 0x143B48u;
            goto label_143b48;
        }
    }
    ctx->pc = 0x143B18u;
    // 0x143b18: 0x93a60028  lbu         $a2, 0x28($sp)
    ctx->pc = 0x143b18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143b1c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x143b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x143b20: 0x64050001  daddiu      $a1, $zero, 0x1
    ctx->pc = 0x143b20u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x143b24: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x143b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x143b28: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x143b28u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x143b2c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x143b2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x143b30: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x143b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x143b34: 0xa3a40028  sb          $a0, 0x28($sp)
    ctx->pc = 0x143b34u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 4));
    // 0x143b38: 0x93a40028  lbu         $a0, 0x28($sp)
    ctx->pc = 0x143b38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x143b3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x143b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x143b40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x143b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x143b44: 0xa3a20028  sb          $v0, 0x28($sp)
    ctx->pc = 0x143b44u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 2));
label_143b48:
    // 0x143b48: 0xc050ed8  jal         func_143B60
    ctx->pc = 0x143B48u;
    SET_GPR_U32(ctx, 31, 0x143B50u);
    ctx->pc = 0x143B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143B48u;
            // 0x143b4c: 0xdfa40028  ld          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143B60u;
    if (runtime->hasFunction(0x143B60u)) {
        auto targetFn = runtime->lookupFunction(0x143B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B50u; }
        if (ctx->pc != 0x143B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__F10sceGsClamp_0x143b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143B50u; }
        if (ctx->pc != 0x143B50u) { return; }
    }
    ctx->pc = 0x143B50u;
label_143b50:
    // 0x143b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143b58: 0x3e00008  jr          $ra
    ctx->pc = 0x143B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B58u;
            // 0x143b5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x143B60u;
}
