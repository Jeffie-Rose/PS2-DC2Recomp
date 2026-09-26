#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCourseR__Fff
// Address: 0x31f2a0 - 0x31f308
void GetCourseR__Fff_0x31f2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCourseR__Fff_0x31f2a0");
#endif

    switch (ctx->pc) {
        case 0x31f2b0u: goto label_31f2b0;
        default: break;
    }

    ctx->pc = 0x31f2a0u;

    // 0x31f2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f2a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f2a8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x31F2A8u;
    SET_GPR_U32(ctx, 31, 0x31F2B0u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2B0u; }
        if (ctx->pc != 0x31F2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31F2B0u; }
        if (ctx->pc != 0x31F2B0u) { return; }
    }
    ctx->pc = 0x31F2B0u;
label_31f2b0:
    // 0x31f2b0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31F2B0u;
    {
        const bool branch_taken_0x31f2b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x31F2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2B0u;
            // 0x31f2b4: 0x30430007  andi        $v1, $v0, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2b0) {
            ctx->pc = 0x31F2C4u;
            goto label_31f2c4;
        }
    }
    ctx->pc = 0x31F2B8u;
    // 0x31f2b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F2B8u;
    {
        const bool branch_taken_0x31f2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2B8u;
            // 0x31f2bc: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2b8) {
            ctx->pc = 0x31F2C8u;
            goto label_31f2c8;
        }
    }
    ctx->pc = 0x31F2C0u;
    // 0x31f2c0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x31f2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_31f2c4:
    // 0x31f2c4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x31f2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31f2c8:
    // 0x31f2c8: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x31f2c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31f2cc: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x31F2CCu;
    {
        const bool branch_taken_0x31f2cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x31F2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2CCu;
            // 0x31f2d0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2cc) {
            ctx->pc = 0x31F2ECu;
            goto label_31f2ec;
        }
    }
    ctx->pc = 0x31F2D4u;
    // 0x31f2d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x31f2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x31f2d8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F2D8u;
    {
        const bool branch_taken_0x31f2d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31F2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2D8u;
            // 0x31f2dc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2d8) {
            ctx->pc = 0x31F2E8u;
            goto label_31f2e8;
        }
    }
    ctx->pc = 0x31F2E0u;
    // 0x31f2e0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31F2E0u;
    {
        const bool branch_taken_0x31f2e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2E0u;
            // 0x31f2e4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2e0) {
            ctx->pc = 0x31F2F8u;
            goto label_31f2f8;
        }
    }
    ctx->pc = 0x31F2E8u;
label_31f2e8:
    // 0x31f2e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x31f2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_31f2ec:
    // 0x31f2ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f2ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f2f0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x31F2F0u;
    {
        const bool branch_taken_0x31f2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F2F0u;
            // 0x31f2f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f2f0) {
            ctx->pc = 0x31F300u;
            goto label_31f300;
        }
    }
    ctx->pc = 0x31F2F8u;
label_31f2f8:
    // 0x31f2f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31f2f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31f300:
    // 0x31f300: 0x3e00008  jr          $ra
    ctx->pc = 0x31F300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31F300u;
            // 0x31f304: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31F308u;
}
