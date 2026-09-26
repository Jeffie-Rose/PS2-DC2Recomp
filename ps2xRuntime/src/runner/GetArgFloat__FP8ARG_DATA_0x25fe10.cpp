#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetArgFloat__FP8ARG_DATA
// Address: 0x25fe10 - 0x25fe60
void GetArgFloat__FP8ARG_DATA_0x25fe10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetArgFloat__FP8ARG_DATA_0x25fe10");
#endif

    switch (ctx->pc) {
        case 0x25fe28u: goto label_25fe28;
        default: break;
    }

    ctx->pc = 0x25fe10u;

    // 0x25fe10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fe10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fe14: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25FE14u;
    {
        const bool branch_taken_0x25fe14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25FE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE14u;
            // 0x25fe18: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe14) {
            ctx->pc = 0x25FE34u;
            goto label_25fe34;
        }
    }
    ctx->pc = 0x25FE1Cu;
    // 0x25fe1c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x25fe1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x25fe20: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x25FE20u;
    SET_GPR_U32(ctx, 31, 0x25FE28u);
    ctx->pc = 0x25FE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE20u;
            // 0x25fe24: 0x2484c4c0  addiu       $a0, $a0, -0x3B40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE28u; }
        if (ctx->pc != 0x25FE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25FE28u; }
        if (ctx->pc != 0x25FE28u) { return; }
    }
    ctx->pc = 0x25FE28u;
label_25fe28:
    // 0x25fe28: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25fe28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25fe2c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x25FE2Cu;
    {
        const bool branch_taken_0x25fe2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE2Cu;
            // 0x25fe30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe2c) {
            ctx->pc = 0x25FE58u;
            goto label_25fe58;
        }
    }
    ctx->pc = 0x25FE34u;
label_25fe34:
    // 0x25fe34: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25fe34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25fe38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25FE38u;
    {
        const bool branch_taken_0x25fe38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25fe38) {
            ctx->pc = 0x25FE4Cu;
            goto label_25fe4c;
        }
    }
    ctx->pc = 0x25FE40u;
    // 0x25fe40: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x25fe40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x25FE44u;
    {
        const bool branch_taken_0x25fe44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE44u;
            // 0x25fe48: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fe44) {
            ctx->pc = 0x25FE54u;
            goto label_25fe54;
        }
    }
    ctx->pc = 0x25FE4Cu;
label_25fe4c:
    // 0x25fe4c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x25fe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25fe50: 0x0  nop
    ctx->pc = 0x25fe50u;
    // NOP
label_25fe54:
    // 0x25fe54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25fe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25fe58:
    // 0x25fe58: 0x3e00008  jr          $ra
    ctx->pc = 0x25FE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25FE58u;
            // 0x25fe5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25FE60u;
}
