#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _CAMERA_QUAKE__FP12RS_STACKDATAi
// Address: 0x2ce210 - 0x2ce280
void ps2__CAMERA_QUAKE__FP12RS_STACKDATAi_0x2ce210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__CAMERA_QUAKE__FP12RS_STACKDATAi_0x2ce210");
#endif

    switch (ctx->pc) {
        case 0x2ce240u: goto label_2ce240;
        case 0x2ce24cu: goto label_2ce24c;
        default: break;
    }

    ctx->pc = 0x2ce210u;

    // 0x2ce210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce214: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce218: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ce218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2ce21c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2ce21cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ce220: 0x8f829da4  lw          $v0, -0x625C($gp)
    ctx->pc = 0x2ce220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
    // 0x2ce224: 0x24502f90  addiu       $s0, $v0, 0x2F90
    ctx->pc = 0x2ce224u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
    // 0x2ce228: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE228u;
    {
        const bool branch_taken_0x2ce228 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CE22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE228u;
            // 0x2ce22c: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce228) {
            ctx->pc = 0x2CE238u;
            goto label_2ce238;
        }
    }
    ctx->pc = 0x2CE230u;
    // 0x2ce230: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2CE230u;
    {
        const bool branch_taken_0x2ce230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE230u;
            // 0x2ce234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce230) {
            ctx->pc = 0x2CE26Cu;
            goto label_2ce26c;
        }
    }
    ctx->pc = 0x2CE238u;
label_2ce238:
    // 0x2ce238: 0xc0b379c  jal         func_2CDE70
    ctx->pc = 0x2CE238u;
    SET_GPR_U32(ctx, 31, 0x2CE240u);
    ctx->pc = 0x2CDE70u;
    if (runtime->hasFunction(0x2CDE70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE240u; }
        if (ctx->pc != 0x2CE240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x2cde70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE240u; }
        if (ctx->pc != 0x2CE240u) { return; }
    }
    ctx->pc = 0x2CE240u;
label_2ce240:
    // 0x2ce240: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ce240u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2ce244: 0xc0b378c  jal         func_2CDE30
    ctx->pc = 0x2CE244u;
    SET_GPR_U32(ctx, 31, 0x2CE24Cu);
    ctx->pc = 0x2CE248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE244u;
            // 0x2ce248: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE30u;
    if (runtime->hasFunction(0x2CDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2CDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE24Cu; }
        if (ctx->pc != 0x2CE24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2cde30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE24Cu; }
        if (ctx->pc != 0x2CE24Cu) { return; }
    }
    ctx->pc = 0x2CE24Cu;
label_2ce24c:
    // 0x2ce24c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ce24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ce250: 0xe6140070  swc1        $f20, 0x70($s0)
    ctx->pc = 0x2ce250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2ce254: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x2ce254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ce258: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ce258u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ce25c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2ce25cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2ce260: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x2ce260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x2ce264: 0xa6020078  sh          $v0, 0x78($s0)
    ctx->pc = 0x2ce264u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 120), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ce268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ce268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ce26c:
    // 0x2ce26c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce270: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ce270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ce274: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ce274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce278: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE278u;
            // 0x2ce27c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE280u;
}
