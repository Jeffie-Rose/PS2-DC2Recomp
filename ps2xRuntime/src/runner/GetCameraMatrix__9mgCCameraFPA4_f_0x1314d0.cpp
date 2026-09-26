#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetCameraMatrix__9mgCCameraFPA4_f
// Address: 0x1314d0 - 0x131584
void GetCameraMatrix__9mgCCameraFPA4_f_0x1314d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetCameraMatrix__9mgCCameraFPA4_f_0x1314d0");
#endif

    switch (ctx->pc) {
        case 0x1314f0u: goto label_1314f0;
        case 0x131550u: goto label_131550;
        case 0x13155cu: goto label_13155c;
        case 0x131570u: goto label_131570;
        default: break;
    }

    ctx->pc = 0x1314d0u;

    // 0x1314d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1314d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1314d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1314d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1314d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1314d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1314dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1314dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1314e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1314e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1314e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1314e8: 0xc04c524  jal         func_131490
    ctx->pc = 0x1314E8u;
    SET_GPR_U32(ctx, 31, 0x1314F0u);
    ctx->pc = 0x1314ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1314E8u;
            // 0x1314ec: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131490u;
    if (runtime->hasFunction(0x131490u)) {
        auto targetFn = runtime->lookupFunction(0x131490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314F0u; }
        if (ctx->pc != 0x1314F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDir__9mgCCameraFPf_0x131490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1314F0u; }
        if (ctx->pc != 0x1314F0u) { return; }
    }
    ctx->pc = 0x1314F0u;
label_1314f0:
    // 0x1314f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1314f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1314f4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1314f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1314f8: 0x27a30034  addiu       $v1, $sp, 0x34
    ctx->pc = 0x1314f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x1314fc: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1314fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x131500: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x131500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x131504: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x131504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131508: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x131508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13150c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x13150cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131510: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x131510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x131514: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x131514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131518: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x131518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x13151c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x13151cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x131520: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x131520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x131524: 0x46031002  mul.s       $f0, $f2, $f3
    ctx->pc = 0x131524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x131528: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x131528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13152c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x13152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131530: 0x46011802  mul.s       $f0, $f3, $f1
    ctx->pc = 0x131530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x131534: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x131534u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x131538: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x131538u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x13153c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x13153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x131540: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x131540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x131544: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x131544u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x131548: 0xc041be0  jal         func_106F80
    ctx->pc = 0x131548u;
    SET_GPR_U32(ctx, 31, 0x131550u);
    ctx->pc = 0x13154Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131548u;
            // 0x13154c: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131550u; }
        if (ctx->pc != 0x131550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131550u; }
        if (ctx->pc != 0x131550u) { return; }
    }
    ctx->pc = 0x131550u;
label_131550:
    // 0x131550: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x131550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131554: 0xc041be0  jal         func_106F80
    ctx->pc = 0x131554u;
    SET_GPR_U32(ctx, 31, 0x13155Cu);
    ctx->pc = 0x131558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131554u;
            // 0x131558: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13155Cu; }
        if (ctx->pc != 0x13155Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13155Cu; }
        if (ctx->pc != 0x13155Cu) { return; }
    }
    ctx->pc = 0x13155Cu;
label_13155c:
    // 0x13155c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131560: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x131560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131564: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x131564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x131568: 0xc041d3e  jal         func_1074F8
    ctx->pc = 0x131568u;
    SET_GPR_U32(ctx, 31, 0x131570u);
    ctx->pc = 0x13156Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x131568u;
            // 0x13156c: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1074F8u;
    if (runtime->hasFunction(0x1074F8u)) {
        auto targetFn = runtime->lookupFunction(0x1074F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131570u; }
        if (ctx->pc != 0x131570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CameraMatrix_0x1074f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x131570u; }
        if (ctx->pc != 0x131570u) { return; }
    }
    ctx->pc = 0x131570u;
label_131570:
    // 0x131570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x131570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x131574: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x131574u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x131578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13157c: 0x3e00008  jr          $ra
    ctx->pc = 0x13157Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13157Cu;
            // 0x131580: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x131584u;
}
