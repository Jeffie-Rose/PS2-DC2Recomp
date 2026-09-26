#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetLightingRatio__4CMapFPf
// Address: 0x160e70 - 0x160fd8
void GetLightingRatio__4CMapFPf_0x160e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetLightingRatio__4CMapFPf_0x160e70");
#endif

    switch (ctx->pc) {
        case 0x160e94u: goto label_160e94;
        case 0x160eb4u: goto label_160eb4;
        default: break;
    }

    ctx->pc = 0x160e70u;

    // 0x160e70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x160e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x160e74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x160e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x160e78: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x160e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x160e7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x160e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x160e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x160e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x160e84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x160e88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x160e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160e8c: 0xc05834c  jal         func_160D30
    ctx->pc = 0x160E8Cu;
    SET_GPR_U32(ctx, 31, 0x160E94u);
    ctx->pc = 0x160E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160E8Cu;
            // 0x160e90: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D30u;
    if (runtime->hasFunction(0x160D30u)) {
        auto targetFn = runtime->lookupFunction(0x160D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E94u; }
        if (ctx->pc != 0x160E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTime__4CMapFv_0x160d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160E94u; }
        if (ctx->pc != 0x160E94u) { return; }
    }
    ctx->pc = 0x160E94u;
label_160e94:
    // 0x160e94: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x160e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x160e98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x160e98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x160e9c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x160e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x160ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x160ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160ea4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x160ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x160ea8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x160ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x160eac: 0xc05835c  jal         func_160D70
    ctx->pc = 0x160EACu;
    SET_GPR_U32(ctx, 31, 0x160EB4u);
    ctx->pc = 0x160EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x160EACu;
            // 0x160eb0: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160D70u;
    if (runtime->hasFunction(0x160D70u)) {
        auto targetFn = runtime->lookupFunction(0x160D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EB4u; }
        if (ctx->pc != 0x160EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowTimeBand__4CMapFv_0x160d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x160EB4u; }
        if (ctx->pc != 0x160EB4u) { return; }
    }
    ctx->pc = 0x160EB4u;
label_160eb4:
    // 0x160eb4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x160eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x160eb8: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x160EB8u;
    {
        const bool branch_taken_0x160eb8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x160EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EB8u;
            // 0x160ebc: 0x30640003  andi        $a0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160eb8) {
            ctx->pc = 0x160ECCu;
            goto label_160ecc;
        }
    }
    ctx->pc = 0x160EC0u;
    // 0x160ec0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x160EC0u;
    {
        const bool branch_taken_0x160ec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EC0u;
            // 0x160ec4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ec0) {
            ctx->pc = 0x160ED0u;
            goto label_160ed0;
        }
    }
    ctx->pc = 0x160EC8u;
    // 0x160ec8: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x160ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_160ecc:
    // 0x160ecc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x160eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_160ed0:
    // 0x160ed0: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x160ED0u;
    {
        const bool branch_taken_0x160ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x160ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160ED0u;
            // 0x160ed4: 0x3c0340c0  lui         $v1, 0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ed0) {
            ctx->pc = 0x160F60u;
            goto label_160f60;
        }
    }
    ctx->pc = 0x160ED8u;
    // 0x160ed8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x160ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x160edc: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x160EDCu;
    {
        const bool branch_taken_0x160edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x160EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EDCu;
            // 0x160ee0: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160edc) {
            ctx->pc = 0x160F40u;
            goto label_160f40;
        }
    }
    ctx->pc = 0x160EE4u;
    // 0x160ee4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x160EE4u;
    {
        const bool branch_taken_0x160ee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EE4u;
            // 0x160ee8: 0x3c034180  lui         $v1, 0x4180 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ee4) {
            ctx->pc = 0x160F20u;
            goto label_160f20;
        }
    }
    ctx->pc = 0x160EECu;
    // 0x160eec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x160eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x160ef0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x160EF0u;
    {
        const bool branch_taken_0x160ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x160EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EF0u;
            // 0x160ef4: 0x3c034100  lui         $v1, 0x4100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ef0) {
            ctx->pc = 0x160F00u;
            goto label_160f00;
        }
    }
    ctx->pc = 0x160EF8u;
    // 0x160ef8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x160EF8u;
    {
        const bool branch_taken_0x160ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160EF8u;
            // 0x160efc: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160ef8) {
            ctx->pc = 0x160F98u;
            goto label_160f98;
        }
    }
    ctx->pc = 0x160F00u;
label_160f00:
    // 0x160f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f04: 0x0  nop
    ctx->pc = 0x160f04u;
    // NOP
    // 0x160f08: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x160f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f0c: 0x0  nop
    ctx->pc = 0x160f0cu;
    // NOP
    // 0x160f10: 0x45010020  bc1t        . + 4 + (0x20 << 2)
    ctx->pc = 0x160F10u;
    {
        const bool branch_taken_0x160f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f10) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F18u;
    // 0x160f18: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x160F18u;
    {
        const bool branch_taken_0x160f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F18u;
            // 0x160f1c: 0x4600a541  sub.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f18) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F20u;
label_160f20:
    // 0x160f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f24: 0x0  nop
    ctx->pc = 0x160f24u;
    // NOP
    // 0x160f28: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x160f28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f2c: 0x0  nop
    ctx->pc = 0x160f2cu;
    // NOP
    // 0x160f30: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x160F30u;
    {
        const bool branch_taken_0x160f30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f30) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F38u;
    // 0x160f38: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x160F38u;
    {
        const bool branch_taken_0x160f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F38u;
            // 0x160f3c: 0x4600a541  sub.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f38) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F40u;
label_160f40:
    // 0x160f40: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160f40u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f44: 0x0  nop
    ctx->pc = 0x160f44u;
    // NOP
    // 0x160f48: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x160f48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f4c: 0x0  nop
    ctx->pc = 0x160f4cu;
    // NOP
    // 0x160f50: 0x45010010  bc1t        . + 4 + (0x10 << 2)
    ctx->pc = 0x160F50u;
    {
        const bool branch_taken_0x160f50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f50) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F58u;
    // 0x160f58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x160F58u;
    {
        const bool branch_taken_0x160f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F58u;
            // 0x160f5c: 0x4600a541  sub.s       $f21, $f20, $f0 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f58) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F60u;
label_160f60:
    // 0x160f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f64: 0x0  nop
    ctx->pc = 0x160f64u;
    // NOP
    // 0x160f68: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x160f68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f6c: 0x0  nop
    ctx->pc = 0x160f6cu;
    // NOP
    // 0x160f70: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x160F70u;
    {
        const bool branch_taken_0x160f70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x160F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160F70u;
            // 0x160f74: 0x3c0340a0  lui         $v1, 0x40A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160f70) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F78u;
    // 0x160f78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x160f78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160f7c: 0x0  nop
    ctx->pc = 0x160f7cu;
    // NOP
    // 0x160f80: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x160f80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160f84: 0x0  nop
    ctx->pc = 0x160f84u;
    // NOP
    // 0x160f88: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x160F88u;
    {
        const bool branch_taken_0x160f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x160f88) {
            ctx->pc = 0x160F94u;
            goto label_160f94;
        }
    }
    ctx->pc = 0x160F90u;
    // 0x160f90: 0x4600a541  sub.s       $f21, $f20, $f0
    ctx->pc = 0x160f90u;
    ctx->f[21] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_160f94:
    // 0x160f94: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x160f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_160f98:
    // 0x160f98: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x160f98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x160f9c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x160f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x160fa0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x160fa0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x160fa4: 0x0  nop
    ctx->pc = 0x160fa4u;
    // NOP
    // 0x160fa8: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x160fa8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x160fac: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x160facu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x160fb0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x160fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x160fb4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x160fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x160fb8: 0xe4750000  swc1        $f21, 0x0($v1)
    ctx->pc = 0x160fb8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x160fbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x160fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x160fc0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x160fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x160fc4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x160fc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160fc8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x160fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x160fcc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x160fccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x160FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x160FD0u;
            // 0x160fd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x160FD8u;
}
