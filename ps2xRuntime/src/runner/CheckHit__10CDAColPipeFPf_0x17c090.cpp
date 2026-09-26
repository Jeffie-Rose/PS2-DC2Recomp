#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckHit__10CDAColPipeFPf
// Address: 0x17c090 - 0x17c240
void CheckHit__10CDAColPipeFPf_0x17c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckHit__10CDAColPipeFPf_0x17c090");
#endif

    switch (ctx->pc) {
        case 0x17c0ccu: goto label_17c0cc;
        case 0x17c0dcu: goto label_17c0dc;
        case 0x17c178u: goto label_17c178;
        case 0x17c1a4u: goto label_17c1a4;
        case 0x17c1f4u: goto label_17c1f4;
        case 0x17c21cu: goto label_17c21c;
        default: break;
    }

    ctx->pc = 0x17c090u;

    // 0x17c090: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x17c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x17c094: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c098: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17c09c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x17c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x17c0a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x17c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x17c0a4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17c0a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17c0ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17c0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17c0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17c0b4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c0b8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17c0b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x17c0bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x17c0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c0c0: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x17c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x17c0c4: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x17C0C4u;
    SET_GPR_U32(ctx, 31, 0x17C0CCu);
    ctx->pc = 0x17C0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0C4u;
            // 0x17c0c8: 0x26650080  addiu       $a1, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0CCu; }
        if (ctx->pc != 0x17C0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0CCu; }
        if (ctx->pc != 0x17C0CCu) { return; }
    }
    ctx->pc = 0x17C0CCu;
label_17c0cc:
    // 0x17c0cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x17c0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17c0d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x17c0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c0d4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x17C0D4u;
    SET_GPR_U32(ctx, 31, 0x17C0DCu);
    ctx->pc = 0x17C0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C0D4u;
            // 0x17c0d8: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0DCu; }
        if (ctx->pc != 0x17C0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C0DCu; }
        if (ctx->pc != 0x17C0DCu) { return; }
    }
    ctx->pc = 0x17C0DCu;
label_17c0dc:
    // 0x17c0dc: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x17c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c0e4: 0xc6610020  lwc1        $f1, 0x20($s3)
    ctx->pc = 0x17c0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c0e8: 0x27b00064  addiu       $s0, $sp, 0x64
    ctx->pc = 0x17c0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x17c0ec: 0x27b10068  addiu       $s1, $sp, 0x68
    ctx->pc = 0x17c0ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x17c0f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c0f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c0f4: 0x0  nop
    ctx->pc = 0x17c0f4u;
    // NOP
    // 0x17c0f8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17c0f8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x17c0fc: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x17c0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17c100: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x17c100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c104: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x17c104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c108: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17c108u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x17c10c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x17c10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x17c110: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x17c110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17c114: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x17c114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c118: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x17c118u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x17c11c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x17c11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x17c120: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x17c120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x17c124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c128: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17c12c: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x17c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x17c130: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x17c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c134: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c138: 0x0  nop
    ctx->pc = 0x17c138u;
    // NOP
    // 0x17c13c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C13Cu;
    {
        const bool branch_taken_0x17c13c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C13Cu;
            // 0x17c140: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c13c) {
            ctx->pc = 0x17C14Cu;
            goto label_17c14c;
        }
    }
    ctx->pc = 0x17C144u;
    // 0x17c144: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x17C144u;
    {
        const bool branch_taken_0x17c144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C144u;
            // 0x17c148: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c144) {
            ctx->pc = 0x17C220u;
            goto label_17c220;
        }
    }
    ctx->pc = 0x17C14Cu;
label_17c14c:
    // 0x17c14c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17c14cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17c150: 0x0  nop
    ctx->pc = 0x17c150u;
    // NOP
    // 0x17c154: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x17c154u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c158: 0x0  nop
    ctx->pc = 0x17c158u;
    // NOP
    // 0x17c15c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C15Cu;
    {
        const bool branch_taken_0x17c15c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C15Cu;
            // 0x17c160: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c15c) {
            ctx->pc = 0x17C16Cu;
            goto label_17c16c;
        }
    }
    ctx->pc = 0x17C164u;
    // 0x17c164: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x17C164u;
    {
        const bool branch_taken_0x17c164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C164u;
            // 0x17c168: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c164) {
            ctx->pc = 0x17C224u;
            goto label_17c224;
        }
    }
    ctx->pc = 0x17C16Cu;
label_17c16c:
    // 0x17c16c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x17c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x17c170: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x17C170u;
    SET_GPR_U32(ctx, 31, 0x17C178u);
    ctx->pc = 0x17C174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C170u;
            // 0x17c174: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C178u; }
        if (ctx->pc != 0x17C178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C178u; }
        if (ctx->pc != 0x17C178u) { return; }
    }
    ctx->pc = 0x17C178u;
label_17c178:
    // 0x17c178: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c17c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x17c17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17c180: 0x0  nop
    ctx->pc = 0x17c180u;
    // NOP
    // 0x17c184: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x17c184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17c188: 0x0  nop
    ctx->pc = 0x17c188u;
    // NOP
    // 0x17c18c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x17C18Cu;
    {
        const bool branch_taken_0x17c18c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17C190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C18Cu;
            // 0x17c190: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c18c) {
            ctx->pc = 0x17C19Cu;
            goto label_17c19c;
        }
    }
    ctx->pc = 0x17C194u;
    // 0x17c194: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x17C194u;
    {
        const bool branch_taken_0x17c194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17C198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C194u;
            // 0x17c198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c194) {
            ctx->pc = 0x17C220u;
            goto label_17c220;
        }
    }
    ctx->pc = 0x17C19Cu;
label_17c19c:
    // 0x17c19c: 0xc041be0  jal         func_106F80
    ctx->pc = 0x17C19Cu;
    SET_GPR_U32(ctx, 31, 0x17C1A4u);
    ctx->pc = 0x17C1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C19Cu;
            // 0x17c1a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1A4u; }
        if (ctx->pc != 0x17C1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1A4u; }
        if (ctx->pc != 0x17C1A4u) { return; }
    }
    ctx->pc = 0x17C1A4u;
label_17c1a4:
    // 0x17c1a4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x17c1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1a8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x17c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c1ac: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x17c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c1b0: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x17c1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x17c1b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c1b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c1b8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x17c1b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x17c1bc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x17c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1c0: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x17c1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c1c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c1c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c1c8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x17c1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x17c1cc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x17c1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17c1d0: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x17c1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17c1d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17c1d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17c1d8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x17c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x17c1dc: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x17c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x17c1e0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17c1e4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17c1e8: 0xc4540070  lwc1        $f20, 0x70($v0)
    ctx->pc = 0x17c1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c1ec: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x17C1ECu;
    SET_GPR_U32(ctx, 31, 0x17C1F4u);
    ctx->pc = 0x17C1F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C1ECu;
            // 0x17c1f0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1F4u; }
        if (ctx->pc != 0x17C1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C1F4u; }
        if (ctx->pc != 0x17C1F4u) { return; }
    }
    ctx->pc = 0x17C1F4u;
label_17c1f4:
    // 0x17c1f4: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x17c1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x17c1f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x17c1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x17c1fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c200: 0x26650040  addiu       $a1, $s3, 0x40
    ctx->pc = 0x17c200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x17c204: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x17c204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17c208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17c208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17c20c: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x17c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x17c210: 0xe4740070  swc1        $f20, 0x70($v1)
    ctx->pc = 0x17c210u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x17c214: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x17C214u;
    SET_GPR_U32(ctx, 31, 0x17C21Cu);
    ctx->pc = 0x17C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C214u;
            // 0x17c218: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C21Cu; }
        if (ctx->pc != 0x17C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C21Cu; }
        if (ctx->pc != 0x17C21Cu) { return; }
    }
    ctx->pc = 0x17C21Cu;
label_17c21c:
    // 0x17c21c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17c220:
    // 0x17c220: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17c220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_17c224:
    // 0x17c224: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17c228: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x17c228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17c22c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x17c22cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17c230: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17c230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17c234: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17c234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c238: 0x3e00008  jr          $ra
    ctx->pc = 0x17C238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17C23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C238u;
            // 0x17c23c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17C240u;
}
