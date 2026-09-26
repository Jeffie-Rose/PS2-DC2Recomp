#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RegularityRand__Fffi
// Address: 0x17f4a0 - 0x17f574
void RegularityRand__Fffi_0x17f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RegularityRand__Fffi_0x17f4a0");
#endif

    switch (ctx->pc) {
        case 0x17f4d8u: goto label_17f4d8;
        case 0x17f4e0u: goto label_17f4e0;
        case 0x17f50cu: goto label_17f50c;
        default: break;
    }

    ctx->pc = 0x17f4a0u;

    // 0x17f4a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17f4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17f4a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17f4a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17f4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17f4ac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17f4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4b4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17f4b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x17f4b8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x17f4b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17f4bc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17f4bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x17f4c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17f4c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f4c4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17f4c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17f4c8: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x17f4c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x17f4cc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x17f4ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x17f4d0: 0x1020001a  beqz        $at, . + 4 + (0x1A << 2)
    ctx->pc = 0x17F4D0u;
    {
        const bool branch_taken_0x17f4d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F4D0u;
            // 0x17f4d4: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f4d0) {
            ctx->pc = 0x17F53Cu;
            goto label_17f53c;
        }
    }
    ctx->pc = 0x17F4D8u;
label_17f4d8:
    // 0x17f4d8: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x17F4D8u;
    SET_GPR_U32(ctx, 31, 0x17F4E0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4E0u; }
        if (ctx->pc != 0x17F4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F4E0u; }
        if (ctx->pc != 0x17F4E0u) { return; }
    }
    ctx->pc = 0x17F4E0u;
label_17f4e0:
    // 0x17f4e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f4e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f4e4: 0x0  nop
    ctx->pc = 0x17f4e4u;
    // NOP
    // 0x17f4e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f4e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17f4ec: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17f4f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f4f4: 0x0  nop
    ctx->pc = 0x17f4f4u;
    // NOP
    // 0x17f4f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x17f4f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x17f4fc: 0x0  nop
    ctx->pc = 0x17f4fcu;
    // NOP
    // 0x17f500: 0x0  nop
    ctx->pc = 0x17f500u;
    // NOP
    // 0x17f504: 0xc04a0ea  jal         func_1283A8
    ctx->pc = 0x17F504u;
    SET_GPR_U32(ctx, 31, 0x17F50Cu);
    ctx->pc = 0x17F508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17F504u;
            // 0x17f508: 0x4600b580  add.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F50Cu; }
        if (ctx->pc != 0x17F50Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17F50Cu; }
        if (ctx->pc != 0x17F50Cu) { return; }
    }
    ctx->pc = 0x17F50Cu;
label_17f50c:
    // 0x17f50c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17f50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17f510: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17f510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17f514: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17f514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x17f518: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x17f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x17f51c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17f51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f520: 0x0  nop
    ctx->pc = 0x17f520u;
    // NOP
    // 0x17f524: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x17f524u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x17f528: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x17f528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x17f52c: 0x0  nop
    ctx->pc = 0x17f52cu;
    // NOP
    // 0x17f530: 0x0  nop
    ctx->pc = 0x17f530u;
    // NOP
    // 0x17f534: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17F534u;
    {
        const bool branch_taken_0x17f534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F534u;
            // 0x17f538: 0x4600b581  sub.s       $f22, $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f534) {
            ctx->pc = 0x17F4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17f4d8;
        }
    }
    ctx->pc = 0x17F53Cu;
label_17f53c:
    // 0x17f53c: 0x0  nop
    ctx->pc = 0x17f53cu;
    // NOP
    // 0x17f540: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17f540u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17f544: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x17f544u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17f548: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f54c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17f54cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17f550: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17f550u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17f554: 0x4600b583  div.s       $f22, $f22, $f0
    ctx->pc = 0x17f554u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[22], ctx->f[0]); }
    // 0x17f558: 0x4614b582  mul.s       $f22, $f22, $f20
    ctx->pc = 0x17f558u;
    ctx->f[22] = FPU_MUL_S(ctx->f[22], ctx->f[20]);
    // 0x17f55c: 0x4616a800  add.s       $f0, $f21, $f22
    ctx->pc = 0x17f55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
    // 0x17f560: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17f560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17f564: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x17f568: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17f56c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17F56Cu;
            // 0x17f570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17F574u;
}
