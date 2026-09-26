#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetDispVolumeForFloat__Ff
// Address: 0x251720 - 0x25177c
void GetDispVolumeForFloat__Ff_0x251720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetDispVolumeForFloat__Ff_0x251720");
#endif

    switch (ctx->pc) {
        case 0x251734u: goto label_251734;
        default: break;
    }

    ctx->pc = 0x251720u;

    // 0x251720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251728: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x251728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x25172c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x25172Cu;
    SET_GPR_U32(ctx, 31, 0x251734u);
    ctx->pc = 0x251730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25172Cu;
            // 0x251730: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251734u; }
        if (ctx->pc != 0x251734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251734u; }
        if (ctx->pc != 0x251734u) { return; }
    }
    ctx->pc = 0x251734u;
label_251734:
    // 0x251734: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x251734u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x251738: 0x3c033851  lui         $v1, 0x3851
    ctx->pc = 0x251738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14417 << 16));
    // 0x25173c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x25173cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
    // 0x251740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x251740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x251744: 0x4600a041  sub.s       $f1, $f20, $f0
    ctx->pc = 0x251744u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x251748: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x251748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25174c: 0x0  nop
    ctx->pc = 0x25174cu;
    // NOP
    // 0x251750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x251750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x251754: 0x0  nop
    ctx->pc = 0x251754u;
    // NOP
    // 0x251758: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x251758u;
    {
        const bool branch_taken_0x251758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x251758) {
            ctx->pc = 0x251768u;
            goto label_251768;
        }
    }
    ctx->pc = 0x251760u;
    // 0x251760: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x251760u;
    {
        const bool branch_taken_0x251760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251760u;
            // 0x251764: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251760) {
            ctx->pc = 0x251770u;
            goto label_251770;
        }
    }
    ctx->pc = 0x251768u;
label_251768:
    // 0x251768: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x251768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x25176c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25176cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_251770:
    // 0x251770: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x251770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x251774: 0x3e00008  jr          $ra
    ctx->pc = 0x251774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251774u;
            // 0x251778: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25177Cu;
}
