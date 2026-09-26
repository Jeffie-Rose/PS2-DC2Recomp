#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StandardPos__Ff
// Address: 0x1b57f0 - 0x1b5854
void StandardPos__Ff_0x1b57f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StandardPos__Ff_0x1b57f0");
#endif

    switch (ctx->pc) {
        case 0x1b581cu: goto label_1b581c;
        case 0x1b583cu: goto label_1b583c;
        default: break;
    }

    ctx->pc = 0x1b57f0u;

    // 0x1b57f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b57f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b57f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b57f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b57f8: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1b57f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b57fc: 0x0  nop
    ctx->pc = 0x1b57fcu;
    // NOP
    // 0x1b5800: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5800u;
    {
        const bool branch_taken_0x1b5800 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B5804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5800u;
            // 0x1b5804: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5800) {
            ctx->pc = 0x1B5828u;
            goto label_1b5828;
        }
    }
    ctx->pc = 0x1B5808u;
    // 0x1b5808: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b5808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1b580c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1b5810: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5810u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5814: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B5814u;
    SET_GPR_U32(ctx, 31, 0x1B581Cu);
    ctx->pc = 0x1B5818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5814u;
            // 0x1b5818: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B581Cu; }
        if (ctx->pc != 0x1B581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B581Cu; }
        if (ctx->pc != 0x1B581Cu) { return; }
    }
    ctx->pc = 0x1B581Cu;
label_1b581c:
    // 0x1b581c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b581cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5820: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B5820u;
    {
        const bool branch_taken_0x1b5820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B5824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5820u;
            // 0x1b5824: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5820) {
            ctx->pc = 0x1B5848u;
            goto label_1b5848;
        }
    }
    ctx->pc = 0x1B5828u;
label_1b5828:
    // 0x1b5828: 0x3c023a83  lui         $v0, 0x3A83
    ctx->pc = 0x1b5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14979 << 16));
    // 0x1b582c: 0x3442126f  ori         $v0, $v0, 0x126F
    ctx->pc = 0x1b582cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4719);
    // 0x1b5830: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b5830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5834: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B5834u;
    SET_GPR_U32(ctx, 31, 0x1B583Cu);
    ctx->pc = 0x1B5838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5834u;
            // 0x1b5838: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B583Cu; }
        if (ctx->pc != 0x1B583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B583Cu; }
        if (ctx->pc != 0x1B583Cu) { return; }
    }
    ctx->pc = 0x1B583Cu;
label_1b583c:
    // 0x1b583c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b583cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b5840: 0x0  nop
    ctx->pc = 0x1b5840u;
    // NOP
    // 0x1b5844: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b5844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b5848:
    // 0x1b5848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b584c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B584Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B584Cu;
            // 0x1b5850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5854u;
}
