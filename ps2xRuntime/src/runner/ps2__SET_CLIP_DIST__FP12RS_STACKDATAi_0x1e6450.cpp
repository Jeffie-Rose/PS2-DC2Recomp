#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_CLIP_DIST__FP12RS_STACKDATAi
// Address: 0x1e6450 - 0x1e6498
void ps2__SET_CLIP_DIST__FP12RS_STACKDATAi_0x1e6450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_CLIP_DIST__FP12RS_STACKDATAi_0x1e6450");
#endif

    switch (ctx->pc) {
        case 0x1e6470u: goto label_1e6470;
        default: break;
    }

    ctx->pc = 0x1e6450u;

    // 0x1e6450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e6454: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6458: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E6458u;
    {
        const bool branch_taken_0x1e6458 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E645Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6458u;
            // 0x1e645c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6458) {
            ctx->pc = 0x1E6468u;
            goto label_1e6468;
        }
    }
    ctx->pc = 0x1E6460u;
    // 0x1e6460: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E6460u;
    {
        const bool branch_taken_0x1e6460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E6464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6460u;
            // 0x1e6464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e6460) {
            ctx->pc = 0x1E648Cu;
            goto label_1e648c;
        }
    }
    ctx->pc = 0x1E6468u;
label_1e6468:
    // 0x1e6468: 0xc0781ac  jal         func_1E06B0
    ctx->pc = 0x1E6468u;
    SET_GPR_U32(ctx, 31, 0x1E6470u);
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6470u; }
        if (ctx->pc != 0x1E6470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E6470u; }
        if (ctx->pc != 0x1E6470u) { return; }
    }
    ctx->pc = 0x1E6470u;
label_1e6470:
    // 0x1e6470: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1e6470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x1e6474: 0x8f838e70  lw          $v1, -0x7190($gp)
    ctx->pc = 0x1e6474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
    // 0x1e6478: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e6478u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e647c: 0x0  nop
    ctx->pc = 0x1e647cu;
    // NOP
    // 0x1e6480: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e6480u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1e6484: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e6484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e6488: 0xe46012fc  swc1        $f0, 0x12FC($v1)
    ctx->pc = 0x1e6488u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4860), bits); }
label_1e648c:
    // 0x1e648c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e648cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e6490: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6490u;
            // 0x1e6494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E6498u;
}
