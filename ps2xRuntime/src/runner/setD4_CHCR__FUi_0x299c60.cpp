#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: setD4_CHCR__FUi
// Address: 0x299c60 - 0x299cc8
void setD4_CHCR__FUi_0x299c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setD4_CHCR__FUi_0x299c60");
#endif

    switch (ctx->pc) {
        case 0x299c74u: goto label_299c74;
        case 0x299cb8u: goto label_299cb8;
        default: break;
    }

    ctx->pc = 0x299c60u;

    // 0x299c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x299c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x299c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x299c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x299c6c: 0xc0462f8  jal         func_118BE0
    ctx->pc = 0x299C6Cu;
    SET_GPR_U32(ctx, 31, 0x299C74u);
    ctx->pc = 0x299C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299C6Cu;
            // 0x299c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118BE0u;
    if (runtime->hasFunction(0x118BE0u)) {
        auto targetFn = runtime->lookupFunction(0x118BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C74u; }
        if (ctx->pc != 0x299C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x118be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299C74u; }
        if (ctx->pc != 0x299C74u) { return; }
    }
    ctx->pc = 0x299C74u;
label_299c74:
    // 0x299c74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x299c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x299c78: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x299c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x299c7c: 0x3444f520  ori         $a0, $v0, 0xF520
    ctx->pc = 0x299c7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x299c80: 0x3445f590  ori         $a1, $v0, 0xF590
    ctx->pc = 0x299c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x299c84: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x299c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299c88: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x299c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
    // 0x299c8c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299c8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299c90: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x299c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x299c94: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x299c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x299c98: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x299c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x299c9c: 0xac30b400  sw          $s0, -0x4C00($at)
    ctx->pc = 0x299c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947840), GPR_U32(ctx, 16));
    // 0x299ca0: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299ca4: 0x8c23f520  lw          $v1, -0xAE0($at)
    ctx->pc = 0x299ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964512)));
    // 0x299ca8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x299ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x299cac: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x299cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x299cb0: 0xc04630a  jal         func_118C28
    ctx->pc = 0x299CB0u;
    SET_GPR_U32(ctx, 31, 0x299CB8u);
    ctx->pc = 0x299CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299CB0u;
            // 0x299cb4: 0xac22f590  sw          $v0, -0xA70($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x118C28u;
    if (runtime->hasFunction(0x118C28u)) {
        auto targetFn = runtime->lookupFunction(0x118C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299CB8u; }
        if (ctx->pc != 0x299CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x118c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x299CB8u; }
        if (ctx->pc != 0x299CB8u) { return; }
    }
    ctx->pc = 0x299CB8u;
label_299cb8:
    // 0x299cb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x299cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x299cbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x299cbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299cc0: 0x3e00008  jr          $ra
    ctx->pc = 0x299CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299CC0u;
            // 0x299cc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x299CC8u;
}
