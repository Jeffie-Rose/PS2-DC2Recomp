#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__9CMapWaterFv
// Address: 0x164c10 - 0x164c44
void ps2___ct__9CMapWaterFv_0x164c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__9CMapWaterFv_0x164c10");
#endif

    switch (ctx->pc) {
        case 0x164c24u: goto label_164c24;
        default: break;
    }

    ctx->pc = 0x164c10u;

    // 0x164c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164c14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164c18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164c1c: 0xc058768  jal         func_161DA0
    ctx->pc = 0x164C1Cu;
    SET_GPR_U32(ctx, 31, 0x164C24u);
    ctx->pc = 0x164C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164C1Cu;
            // 0x164c20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161DA0u;
    if (runtime->hasFunction(0x161DA0u)) {
        auto targetFn = runtime->lookupFunction(0x161DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C24u; }
        if (ctx->pc != 0x164C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFv_0x161da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164C24u; }
        if (ctx->pc != 0x164C24u) { return; }
    }
    ctx->pc = 0x164C24u;
label_164c24:
    // 0x164c24: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x164c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x164c28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x164c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164c2c: 0x24635320  addiu       $v1, $v1, 0x5320
    ctx->pc = 0x164c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21280));
    // 0x164c30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x164c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x164c34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x164c34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164c3c: 0x3e00008  jr          $ra
    ctx->pc = 0x164C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C3Cu;
            // 0x164c40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164C44u;
}
