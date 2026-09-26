#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetBSphere__8mgCFrameFPff
// Address: 0x136760 - 0x1367a4
void SetBSphere__8mgCFrameFPff_0x136760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetBSphere__8mgCFrameFPff_0x136760");
#endif

    switch (ctx->pc) {
        case 0x136788u: goto label_136788;
        default: break;
    }

    ctx->pc = 0x136760u;

    // 0x136760: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x136760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x136764: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x136764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x136768: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x136768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13676c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13676cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x136770: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x136770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136774: 0x8c8300f0  lw          $v1, 0xF0($a0)
    ctx->pc = 0x136774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x136778: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x136778u;
    {
        const bool branch_taken_0x136778 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x136778u;
            // 0x13677c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136778) {
            ctx->pc = 0x136790u;
            goto label_136790;
        }
    }
    ctx->pc = 0x136780u;
    // 0x136780: 0xc041c5c  jal         func_107170
    ctx->pc = 0x136780u;
    SET_GPR_U32(ctx, 31, 0x136788u);
    ctx->pc = 0x136784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x136780u;
            // 0x136784: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136788u; }
        if (ctx->pc != 0x136788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x136788u; }
        if (ctx->pc != 0x136788u) { return; }
    }
    ctx->pc = 0x136788u;
label_136788:
    // 0x136788: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x136788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x13678c: 0xe47400ac  swc1        $f20, 0xAC($v1)
    ctx->pc = 0x13678cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_136790:
    // 0x136790: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x136790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x136794: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x136794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136798: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x136798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13679c: 0x3e00008  jr          $ra
    ctx->pc = 0x13679Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1367A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13679Cu;
            // 0x1367a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1367A4u;
}
