#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckFuncEvent__FP10CFuncPointPfiP12MapEventInfoPf
// Address: 0x160900 - 0x160b0c
void CheckFuncEvent__FP10CFuncPointPfiP12MapEventInfoPf_0x160900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckFuncEvent__FP10CFuncPointPfiP12MapEventInfoPf_0x160900");
#endif

    switch (ctx->pc) {
        case 0x16094cu: goto label_16094c;
        case 0x160964u: goto label_160964;
        case 0x16097cu: goto label_16097c;
        case 0x16098cu: goto label_16098c;
        case 0x16099cu: goto label_16099c;
        case 0x1609e8u: goto label_1609e8;
        case 0x160ad0u: goto label_160ad0;
        default: break;
    }

    ctx->pc = 0x160900u;

    // 0x160900: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x160900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x160904: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x160904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x160908: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x160908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x16090c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x16090cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x160910: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x160910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x160914: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x160914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x160918: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x160918u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16091c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x16091cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x160920: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x160920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160924: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x160924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x160928: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x160928u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16092c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16092cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x160930: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x160930u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160934: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160938: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x160938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16093c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16093cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x160940: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x160940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160944: 0xc0a71b0  jal         func_29C6C0
    ctx->pc = 0x160944u;
    SET_GPR_U32(ctx, 31, 0x16094Cu);
    ctx->pc = 0x160948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160944u;
            // 0x160948: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C6C0u;
    if (runtime->hasFunction(0x29C6C0u)) {
        auto targetFn = runtime->lookupFunction(0x29C6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16094Cu; }
        if (ctx->pc != 0x16094Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Check__10CFuncPointFP15CFuncPointCheck_0x29c6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16094Cu; }
        if (ctx->pc != 0x16094Cu) { return; }
    }
    ctx->pc = 0x16094Cu;
label_16094c:
    // 0x16094c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16094Cu;
    {
        const bool branch_taken_0x16094c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16094Cu;
            // 0x160950: 0x26a40070  addiu       $a0, $s5, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16094c) {
            ctx->pc = 0x16095Cu;
            goto label_16095c;
        }
    }
    ctx->pc = 0x160954u;
    // 0x160954: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x160954u;
    {
        const bool branch_taken_0x160954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160954u;
            // 0x160958: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160954) {
            ctx->pc = 0x160AD8u;
            goto label_160ad8;
        }
    }
    ctx->pc = 0x16095Cu;
label_16095c:
    // 0x16095c: 0xc04dc0c  jal         func_137030
    ctx->pc = 0x16095Cu;
    SET_GPR_U32(ctx, 31, 0x160964u);
    ctx->pc = 0x160960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16095Cu;
            // 0x160960: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137030u;
    if (runtime->hasFunction(0x137030u)) {
        auto targetFn = runtime->lookupFunction(0x137030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160964u; }
        if (ctx->pc != 0x160964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__8mgCFrameFPA4_f_0x137030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160964u; }
        if (ctx->pc != 0x160964u) { return; }
    }
    ctx->pc = 0x160964u;
label_160964:
    // 0x160964: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x160964u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x160968: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x160968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x16096c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x16096cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160970: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x160970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x160974: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x160974u;
    SET_GPR_U32(ctx, 31, 0x16097Cu);
    ctx->pc = 0x160978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160974u;
            // 0x160978: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16097Cu; }
        if (ctx->pc != 0x16097Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16097Cu; }
        if (ctx->pc != 0x16097Cu) { return; }
    }
    ctx->pc = 0x16097Cu;
label_16097c:
    // 0x16097c: 0x27b700b0  addiu       $s7, $sp, 0xB0
    ctx->pc = 0x16097cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x160980: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x160980u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x160984: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x160984u;
    SET_GPR_U32(ctx, 31, 0x16098Cu);
    ctx->pc = 0x160988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160984u;
            // 0x160988: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16098Cu; }
        if (ctx->pc != 0x16098Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16098Cu; }
        if (ctx->pc != 0x16098Cu) { return; }
    }
    ctx->pc = 0x16098Cu;
label_16098c:
    // 0x16098c: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x16098cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x160990: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x160990u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x160994: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x160994u;
    SET_GPR_U32(ctx, 31, 0x16099Cu);
    ctx->pc = 0x160998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160994u;
            // 0x160998: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16099Cu; }
        if (ctx->pc != 0x16099Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16099Cu; }
        if (ctx->pc != 0x16099Cu) { return; }
    }
    ctx->pc = 0x16099Cu;
label_16099c:
    // 0x16099c: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x16099cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1609a0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1609a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1609a4: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x1609a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1609a8: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x1609a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1609ac: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x1609acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1609b0: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x1609b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x1609b4: 0x461418c3  div.s       $f3, $f3, $f20
    ctx->pc = 0x1609b4u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[20]); }
    // 0x1609b8: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x1609b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x1609bc: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x1609bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1609c0: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x1609c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x1609c4: 0x46151083  div.s       $f2, $f2, $f21
    ctx->pc = 0x1609c4u;
    { if (ctx->f[21] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[21]); }
    // 0x1609c8: 0xe7a200f4  swc1        $f2, 0xF4($sp)
    ctx->pc = 0x1609c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x1609cc: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x1609ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1609d0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1609d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1609d4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x1609d4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x1609d8: 0x0  nop
    ctx->pc = 0x1609d8u;
    // NOP
    // 0x1609dc: 0x0  nop
    ctx->pc = 0x1609dcu;
    // NOP
    // 0x1609e0: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1609E0u;
    SET_GPR_U32(ctx, 31, 0x1609E8u);
    ctx->pc = 0x1609E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1609E0u;
            // 0x1609e4: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609E8u; }
        if (ctx->pc != 0x1609E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1609E8u; }
        if (ctx->pc != 0x1609E8u) { return; }
    }
    ctx->pc = 0x1609E8u;
label_1609e8:
    // 0x1609e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1609e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1609ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1609ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1609f0: 0x0  nop
    ctx->pc = 0x1609f0u;
    // NOP
    // 0x1609f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1609f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1609f8: 0x0  nop
    ctx->pc = 0x1609f8u;
    // NOP
    // 0x1609fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1609FCu;
    {
        const bool branch_taken_0x1609fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x160A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1609FCu;
            // 0x160a00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609fc) {
            ctx->pc = 0x160A0Cu;
            goto label_160a0c;
        }
    }
    ctx->pc = 0x160A04u;
    // 0x160a04: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x160A04u;
    {
        const bool branch_taken_0x160a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A04u;
            // 0x160a08: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a04) {
            ctx->pc = 0x160ADCu;
            goto label_160adc;
        }
    }
    ctx->pc = 0x160A0Cu;
label_160a0c:
    // 0x160a0c: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
    ctx->pc = 0x160A0Cu;
    {
        const bool branch_taken_0x160a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a0c) {
            ctx->pc = 0x160ABCu;
            goto label_160abc;
        }
    }
    ctx->pc = 0x160A14u;
    // 0x160a14: 0x8ea20024  lw          $v0, 0x24($s5)
    ctx->pc = 0x160a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x160a18: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x160A18u;
    {
        const bool branch_taken_0x160a18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x160a18) {
            ctx->pc = 0x160A24u;
            goto label_160a24;
        }
    }
    ctx->pc = 0x160A20u;
    // 0x160a20: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x160a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_160a24:
    // 0x160a24: 0xae530000  sw          $s3, 0x0($s2)
    ctx->pc = 0x160a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
    // 0x160a28: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x160a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x160a2c: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x160a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x160a30: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160A30u;
    {
        const bool branch_taken_0x160a30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A30u;
            // 0x160a34: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a30) {
            ctx->pc = 0x160A40u;
            goto label_160a40;
        }
    }
    ctx->pc = 0x160A38u;
    // 0x160a38: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x160A38u;
    {
        const bool branch_taken_0x160a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A38u;
            // 0x160a3c: 0x27a200a0  addiu       $v0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a38) {
            ctx->pc = 0x160A9Cu;
            goto label_160a9c;
        }
    }
    ctx->pc = 0x160A40u;
label_160a40:
    // 0x160a40: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x160A40u;
    {
        const bool branch_taken_0x160a40 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A40u;
            // 0x160a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a40) {
            ctx->pc = 0x160A68u;
            goto label_160a68;
        }
    }
    ctx->pc = 0x160A48u;
    // 0x160a48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160A48u;
    {
        const bool branch_taken_0x160a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A48u;
            // 0x160a4c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a48) {
            ctx->pc = 0x160A58u;
            goto label_160a58;
        }
    }
    ctx->pc = 0x160A50u;
    // 0x160a50: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x160A50u;
    {
        const bool branch_taken_0x160a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A50u;
            // 0x160a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a50) {
            ctx->pc = 0x160AD8u;
            goto label_160ad8;
        }
    }
    ctx->pc = 0x160A58u;
label_160a58:
    // 0x160a58: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x160A58u;
    {
        const bool branch_taken_0x160a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A58u;
            // 0x160a5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a58) {
            ctx->pc = 0x160A98u;
            goto label_160a98;
        }
    }
    ctx->pc = 0x160A60u;
    // 0x160a60: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x160A60u;
    {
        const bool branch_taken_0x160a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a60) {
            ctx->pc = 0x160AD8u;
            goto label_160ad8;
        }
    }
    ctx->pc = 0x160A68u;
label_160a68:
    // 0x160a68: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160A68u;
    {
        const bool branch_taken_0x160a68 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x160A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A68u;
            // 0x160a6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a68) {
            ctx->pc = 0x160A80u;
            goto label_160a80;
        }
    }
    ctx->pc = 0x160A70u;
    // 0x160a70: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x160A70u;
    {
        const bool branch_taken_0x160a70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A70u;
            // 0x160a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a70) {
            ctx->pc = 0x160A98u;
            goto label_160a98;
        }
    }
    ctx->pc = 0x160A78u;
    // 0x160a78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x160A78u;
    {
        const bool branch_taken_0x160a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a78) {
            ctx->pc = 0x160AD8u;
            goto label_160ad8;
        }
    }
    ctx->pc = 0x160A80u;
label_160a80:
    // 0x160a80: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x160A80u;
    {
        const bool branch_taken_0x160a80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x160A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A80u;
            // 0x160a84: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a80) {
            ctx->pc = 0x160A98u;
            goto label_160a98;
        }
    }
    ctx->pc = 0x160A88u;
    // 0x160a88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160A88u;
    {
        const bool branch_taken_0x160a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x160A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160A88u;
            // 0x160a8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a88) {
            ctx->pc = 0x160A98u;
            goto label_160a98;
        }
    }
    ctx->pc = 0x160A90u;
    // 0x160a90: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x160A90u;
    {
        const bool branch_taken_0x160a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a90) {
            ctx->pc = 0x160AD8u;
            goto label_160ad8;
        }
    }
    ctx->pc = 0x160A98u;
label_160a98:
    // 0x160a98: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x160a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_160a9c:
    // 0x160a9c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x160a9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160aa0: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x160aa0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x160aa4: 0x7ae20000  lq          $v0, 0x0($s7)
    ctx->pc = 0x160aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x160aa8: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x160aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x160aac: 0x7ac20000  lq          $v0, 0x0($s6)
    ctx->pc = 0x160aacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x160ab0: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x160ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x160ab4: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x160ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x160ab8: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x160ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
label_160abc:
    // 0x160abc: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x160ABCu;
    {
        const bool branch_taken_0x160abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x160AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160ABCu;
            // 0x160ac0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160abc) {
            ctx->pc = 0x160AD8u;
            goto label_160ad8;
        }
    }
    ctx->pc = 0x160AC4u;
    // 0x160ac4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x160ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ac8: 0xc04c018  jal         func_130060
    ctx->pc = 0x160AC8u;
    SET_GPR_U32(ctx, 31, 0x160AD0u);
    ctx->pc = 0x160ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160AC8u;
            // 0x160acc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AD0u; }
        if (ctx->pc != 0x160AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160AD0u; }
        if (ctx->pc != 0x160AD0u) { return; }
    }
    ctx->pc = 0x160AD0u;
label_160ad0:
    // 0x160ad0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x160ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x160ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x160ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_160ad8:
    // 0x160ad8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x160ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_160adc:
    // 0x160adc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x160adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x160ae0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x160ae0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x160ae4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x160ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x160ae8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x160ae8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x160aec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x160aecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x160af0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x160af0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x160af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x160af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x160af8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x160af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160b04: 0x3e00008  jr          $ra
    ctx->pc = 0x160B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160B04u;
            // 0x160b08: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160B0Cu;
}
