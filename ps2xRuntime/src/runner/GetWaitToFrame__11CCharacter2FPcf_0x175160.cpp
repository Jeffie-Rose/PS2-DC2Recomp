#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetWaitToFrame__11CCharacter2FPcf
// Address: 0x175160 - 0x1751c0
void GetWaitToFrame__11CCharacter2FPcf_0x175160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetWaitToFrame__11CCharacter2FPcf_0x175160");
#endif

    switch (ctx->pc) {
        case 0x175184u: goto label_175184;
        default: break;
    }

    ctx->pc = 0x175160u;

    // 0x175160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x175160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x175164: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x175164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175168: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x175168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17516c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17516cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x175170: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x175170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x175174: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x175174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x175178: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x175178u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17517c: 0xc05d2b4  jal         func_174AD0
    ctx->pc = 0x17517Cu;
    SET_GPR_U32(ctx, 31, 0x175184u);
    ctx->pc = 0x175180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17517Cu;
            // 0x175180: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x174AD0u;
    if (runtime->hasFunction(0x174AD0u)) {
        auto targetFn = runtime->lookupFunction(0x174AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175184u; }
        if (ctx->pc != 0x175184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyListPtr__11CCharacter2FPcPi_0x174ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175184u; }
        if (ctx->pc != 0x175184u) { return; }
    }
    ctx->pc = 0x175184u;
label_175184:
    // 0x175184: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x175184u;
    {
        const bool branch_taken_0x175184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175184u;
            // 0x175188: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x175184) {
            ctx->pc = 0x1751ACu;
            goto label_1751ac;
        }
    }
    ctx->pc = 0x17518Cu;
    // 0x17518c: 0xc4400024  lwc1        $f0, 0x24($v0)
    ctx->pc = 0x17518cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x175190: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x175190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x175194: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x175194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x175198: 0x46801020  cvt.s.w     $f0, $f2
    ctx->pc = 0x175198u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17519c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17519cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1751a0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x1751a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x1751a4: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x1751a4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1751a8: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x1751a8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_1751ac:
    // 0x1751ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1751acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1751b0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1751b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1751b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1751b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1751b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1751B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1751BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1751B8u;
            // 0x1751bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1751C0u;
}
