#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetEditAlt__8CEditMapFf
// Address: 0x1b1220 - 0x1b127c
void GetEditAlt__8CEditMapFf_0x1b1220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetEditAlt__8CEditMapFf_0x1b1220");
#endif

    switch (ctx->pc) {
        case 0x1b1248u: goto label_1b1248;
        case 0x1b1264u: goto label_1b1264;
        default: break;
    }

    ctx->pc = 0x1b1220u;

    // 0x1b1220: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b1220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1224: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1228: 0x46006036  c.le.s      $f12, $f0
    ctx->pc = 0x1b1228u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b122c: 0x0  nop
    ctx->pc = 0x1b122cu;
    // NOP
    // 0x1b1230: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B1230u;
    {
        const bool branch_taken_0x1b1230 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B1234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1230u;
            // 0x1b1234: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1230) {
            ctx->pc = 0x1B1254u;
            goto label_1b1254;
        }
    }
    ctx->pc = 0x1B1238u;
    // 0x1b1238: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b1238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b123c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b123cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1240: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B1240u;
    SET_GPR_U32(ctx, 31, 0x1B1248u);
    ctx->pc = 0x1B1244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1240u;
            // 0x1b1244: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1248u; }
        if (ctx->pc != 0x1B1248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1248u; }
        if (ctx->pc != 0x1B1248u) { return; }
    }
    ctx->pc = 0x1B1248u;
label_1b1248:
    // 0x1b1248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b124c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1B124Cu;
    {
        const bool branch_taken_0x1b124c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B124Cu;
            // 0x1b1250: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b124c) {
            ctx->pc = 0x1B1270u;
            goto label_1b1270;
        }
    }
    ctx->pc = 0x1B1254u;
label_1b1254:
    // 0x1b1254: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1b1254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1b1258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b125c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1B125Cu;
    SET_GPR_U32(ctx, 31, 0x1B1264u);
    ctx->pc = 0x1B1260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B125Cu;
            // 0x1b1260: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1264u; }
        if (ctx->pc != 0x1B1264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1264u; }
        if (ctx->pc != 0x1B1264u) { return; }
    }
    ctx->pc = 0x1B1264u;
label_1b1264:
    // 0x1b1264: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b1264u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1268: 0x0  nop
    ctx->pc = 0x1b1268u;
    // NOP
    // 0x1b126c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b126cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1b1270:
    // 0x1b1270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1274: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1274u;
            // 0x1b1278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B127Cu;
}
