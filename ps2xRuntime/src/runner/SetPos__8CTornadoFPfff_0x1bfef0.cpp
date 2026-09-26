#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetPos__8CTornadoFPfff
// Address: 0x1bfef0 - 0x1c00d8
void SetPos__8CTornadoFPfff_0x1bfef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetPos__8CTornadoFPfff_0x1bfef0");
#endif

    switch (ctx->pc) {
        case 0x1bff48u: goto label_1bff48;
        case 0x1bff70u: goto label_1bff70;
        case 0x1bff80u: goto label_1bff80;
        case 0x1bff90u: goto label_1bff90;
        case 0x1bff9cu: goto label_1bff9c;
        case 0x1bffe4u: goto label_1bffe4;
        case 0x1c0010u: goto label_1c0010;
        case 0x1c0018u: goto label_1c0018;
        case 0x1c0028u: goto label_1c0028;
        case 0x1c003cu: goto label_1c003c;
        case 0x1c0054u: goto label_1c0054;
        default: break;
    }

    ctx->pc = 0x1bfef0u;

    // 0x1bfef0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bfef4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1bfef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1bfef8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1bfef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1bfefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bfefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bff00: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1bff00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1bff04: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bff04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bff08: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bff08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bff0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bff10: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1bff10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bff14: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1bff14u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1bff18: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1bff18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bff1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1bff1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1bff20: 0x45010065  bc1t        . + 4 + (0x65 << 2)
    ctx->pc = 0x1BFF20u;
    {
        const bool branch_taken_0x1bff20 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF20u;
            // 0x1bff24: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff20) {
            ctx->pc = 0x1C00B8u;
            goto label_1c00b8;
        }
    }
    ctx->pc = 0x1BFF28u;
    // 0x1bff28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff2c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x1bff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1bff30: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1bff30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1bff34: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1bff38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1bff3c: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1bff3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1bff40: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1BFF40u;
    SET_GPR_U32(ctx, 31, 0x1BFF48u);
    ctx->pc = 0x1BFF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF40u;
            // 0x1bff44: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF48u; }
        if (ctx->pc != 0x1BFF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF48u; }
        if (ctx->pc != 0x1BFF48u) { return; }
    }
    ctx->pc = 0x1BFF48u;
label_1bff48:
    // 0x1bff48: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
    // 0x1bff4c: 0x3c024160  lui         $v0, 0x4160
    ctx->pc = 0x1bff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16736 << 16));
    // 0x1bff50: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bff50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bff54: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1bff54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bff58: 0x0  nop
    ctx->pc = 0x1bff58u;
    // NOP
    // 0x1bff5c: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x1bff5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x1bff60: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x1bff60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1bff64: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x1bff64u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
    // 0x1bff68: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1BFF68u;
    SET_GPR_U32(ctx, 31, 0x1BFF70u);
    ctx->pc = 0x1BFF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF68u;
            // 0x1bff6c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF70u; }
        if (ctx->pc != 0x1BFF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF70u; }
        if (ctx->pc != 0x1BFF70u) { return; }
    }
    ctx->pc = 0x1BFF70u;
label_1bff70:
    // 0x1bff70: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1bff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1bff74: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1bff74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x1bff78: 0xc0a24f0  jal         func_2893C0
    ctx->pc = 0x1BFF78u;
    SET_GPR_U32(ctx, 31, 0x1BFF80u);
    ctx->pc = 0x1BFF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF78u;
            // 0x1bff7c: 0xc64c000c  lwc1        $f12, 0xC($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF80u; }
        if (ctx->pc != 0x1BFF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF80u; }
        if (ctx->pc != 0x1BFF80u) { return; }
    }
    ctx->pc = 0x1BFF80u;
label_1bff80:
    // 0x1bff80: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1bff80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x1bff84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bff84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff88: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x1BFF88u;
    SET_GPR_U32(ctx, 31, 0x1BFF90u);
    ctx->pc = 0x1BFF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFF88u;
            // 0x1bff8c: 0x24846c30  addiu       $a0, $a0, 0x6C30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF90u; }
        if (ctx->pc != 0x1BFF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BFF90u; }
        if (ctx->pc != 0x1BFF90u) { return; }
    }
    ctx->pc = 0x1BFF90u;
label_1bff90:
    // 0x1bff90: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x1bff90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x1bff94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bff94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bff98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bff9c:
    // 0x1bff9c: 0x2053021  addu        $a2, $s0, $a1
    ctx->pc = 0x1bff9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1bffa0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1bffa4: 0xa0c00020  sb          $zero, 0x20($a2)
    ctx->pc = 0x1bffa4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffa8: 0x2883000a  slti        $v1, $a0, 0xA
    ctx->pc = 0x1bffa8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1bffac: 0xa0c00050  sb          $zero, 0x50($a2)
    ctx->pc = 0x1bffacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 80), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffb0: 0x24a50180  addiu       $a1, $a1, 0x180
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 384));
    // 0x1bffb4: 0xa0c00080  sb          $zero, 0x80($a2)
    ctx->pc = 0x1bffb4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 128), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffb8: 0xa0c000b0  sb          $zero, 0xB0($a2)
    ctx->pc = 0x1bffb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 176), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffbc: 0xa0c000e0  sb          $zero, 0xE0($a2)
    ctx->pc = 0x1bffbcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 224), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffc0: 0xa0c00110  sb          $zero, 0x110($a2)
    ctx->pc = 0x1bffc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 272), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffc4: 0xa0c00140  sb          $zero, 0x140($a2)
    ctx->pc = 0x1bffc4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 320), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bffc8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1BFFC8u;
    {
        const bool branch_taken_0x1bffc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFC8u;
            // 0x1bffcc: 0xa0c00170  sb          $zero, 0x170($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 368), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffc8) {
            ctx->pc = 0x1BFF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bff9c;
        }
    }
    ctx->pc = 0x1BFFD0u;
    // 0x1bffd0: 0x28810012  slti        $at, $a0, 0x12
    ctx->pc = 0x1bffd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1bffd4: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFFD4u;
    {
        const bool branch_taken_0x1bffd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BFFD4u;
            // 0x1bffd8: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffd4) {
            ctx->pc = 0x1C0004u;
            goto label_1c0004;
        }
    }
    ctx->pc = 0x1BFFDCu;
    // 0x1bffdc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1bffdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1bffe0: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1bffe4:
    // 0x1bffe4: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x1bffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1bffe8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1bffe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1bffec: 0xa0600020  sb          $zero, 0x20($v1)
    ctx->pc = 0x1bffecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1bfff0: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x1bfff4: 0x28830012  slti        $v1, $a0, 0x12
    ctx->pc = 0x1bfff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x1bfff8: 0x0  nop
    ctx->pc = 0x1bfff8u;
    // NOP
    // 0x1bfffc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1BFFFCu;
    {
        const bool branch_taken_0x1bfffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfffc) {
            ctx->pc = 0x1BFFE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bffe4;
        }
    }
    ctx->pc = 0x1C0004u;
label_1c0004:
    // 0x1c0004: 0x0  nop
    ctx->pc = 0x1c0004u;
    // NOP
    // 0x1c0008: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1C0008u;
    {
        const bool branch_taken_0x1c0008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0008u;
            // 0x1c000c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0008) {
            ctx->pc = 0x1C00A8u;
            goto label_1c00a8;
        }
    }
    ctx->pc = 0x1C0010u;
label_1c0010:
    // 0x1c0010: 0xc041c5c  jal         func_107170
    ctx->pc = 0x1C0010u;
    SET_GPR_U32(ctx, 31, 0x1C0018u);
    ctx->pc = 0x1C0014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0010u;
            // 0x1c0014: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0018u; }
        if (ctx->pc != 0x1C0018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0018u; }
        if (ctx->pc != 0x1C0018u) { return; }
    }
    ctx->pc = 0x1C0018u;
label_1c0018:
    // 0x1c0018: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1c001c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c001cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0020: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C0020u;
    SET_GPR_U32(ctx, 31, 0x1C0028u);
    ctx->pc = 0x1C0024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0020u;
            // 0x1c0024: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0028u; }
        if (ctx->pc != 0x1C0028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0028u; }
        if (ctx->pc != 0x1C0028u) { return; }
    }
    ctx->pc = 0x1C0028u;
label_1c0028:
    // 0x1c0028: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1c0028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c002c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1c002cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1c0030: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c0030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c0034: 0xc0724a4  jal         func_1C9290
    ctx->pc = 0x1C0034u;
    SET_GPR_U32(ctx, 31, 0x1C003Cu);
    ctx->pc = 0x1C0038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0034u;
            // 0x1c0038: 0xe6000004  swc1        $f0, 0x4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C003Cu; }
        if (ctx->pc != 0x1C003Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C003Cu; }
        if (ctx->pc != 0x1C003Cu) { return; }
    }
    ctx->pc = 0x1C003Cu;
label_1c003c:
    // 0x1c003c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x1c003cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x1c0040: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x1c0044: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1c0044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x1c0048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1c0048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c004c: 0xc0724bc  jal         func_1C92F0
    ctx->pc = 0x1C004Cu;
    SET_GPR_U32(ctx, 31, 0x1C0054u);
    ctx->pc = 0x1C0050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C004Cu;
            // 0x1c0050: 0xa2030020  sb          $v1, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0054u; }
        if (ctx->pc != 0x1C0054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C0054u; }
        if (ctx->pc != 0x1C0054u) { return; }
    }
    ctx->pc = 0x1C0054u;
label_1c0054:
    // 0x1c0054: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x1c0054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x1c0058: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1c0058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1c005c: 0x34650fdb  ori         $a1, $v1, 0xFDB
    ctx->pc = 0x1c005cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x1c0060: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c0060u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1c0064: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x1c0064u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0068: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x1c0068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
    // 0x1c006c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c006cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c0070: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c0070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c0074: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c0074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c0078: 0x0  nop
    ctx->pc = 0x1c0078u;
    // NOP
    // 0x1c007c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1c007cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c0080: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x1c0080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1c0084: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x1c0084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x1c0088: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x1c0088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
    // 0x1c008c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1c008cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1c0090: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1c0090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1c0094: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c0094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c0098: 0x0  nop
    ctx->pc = 0x1c0098u;
    // NOP
    // 0x1c009c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c009cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1c00a0: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x1c00a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x1c00a4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x1c00a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1c00a8:
    // 0x1c00a8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1c00a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c00ac: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x1c00acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c00b0: 0x1460ffd7  bnez        $v1, . + 4 + (-0x29 << 2)
    ctx->pc = 0x1C00B0u;
    {
        const bool branch_taken_0x1c00b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C00B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00B0u;
            // 0x1c00b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00b0) {
            ctx->pc = 0x1C0010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0010;
        }
    }
    ctx->pc = 0x1C00B8u;
label_1c00b8:
    // 0x1c00b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c00b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c00bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1c00bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1c00c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c00c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c00c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c00c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c00c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c00c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c00cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c00ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c00d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C00D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C00D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C00D0u;
            // 0x1c00d4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C00D8u;
}
