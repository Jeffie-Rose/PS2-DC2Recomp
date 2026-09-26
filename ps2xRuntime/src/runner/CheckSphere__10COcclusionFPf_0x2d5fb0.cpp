#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSphere__10COcclusionFPf
// Address: 0x2d5fb0 - 0x2d60dc
void CheckSphere__10COcclusionFPf_0x2d5fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSphere__10COcclusionFPf_0x2d5fb0");
#endif

    switch (ctx->pc) {
        case 0x2d6014u: goto label_2d6014;
        case 0x2d6040u: goto label_2d6040;
        case 0x2d6064u: goto label_2d6064;
        case 0x2d6088u: goto label_2d6088;
        case 0x2d60acu: goto label_2d60ac;
        default: break;
    }

    ctx->pc = 0x2d5fb0u;

    // 0x2d5fb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d5fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d5fb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d5fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d5fb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d5fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d5fbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d5fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d5fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d5fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5fc4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5fc8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D5FC8u;
    {
        const bool branch_taken_0x2d5fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5FC8u;
            // 0x2d5fcc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fc8) {
            ctx->pc = 0x2D5FDCu;
            goto label_2d5fdc;
        }
    }
    ctx->pc = 0x2D5FD0u;
    // 0x2d5fd0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x2d5fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2d5fd4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5FD4u;
    {
        const bool branch_taken_0x2d5fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d5fd4) {
            ctx->pc = 0x2D5FE4u;
            goto label_2d5fe4;
        }
    }
    ctx->pc = 0x2D5FDCu;
label_2d5fdc:
    // 0x2d5fdc: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x2D5FDCu;
    {
        const bool branch_taken_0x2d5fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5FDCu;
            // 0x2d5fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5fdc) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D5FE4u;
label_2d5fe4:
    // 0x2d5fe4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2d5fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d5fe8: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d5fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d5fec: 0xc62000b8  lwc1        $f0, 0xB8($s1)
    ctx->pc = 0x2d5fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d5ff0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2d5ff0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2d5ff4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2d5ff4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d5ff8: 0x0  nop
    ctx->pc = 0x2d5ff8u;
    // NOP
    // 0x2d5ffc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D5FFCu;
    {
        const bool branch_taken_0x2d5ffc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D5FFCu;
            // 0x2d6000: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5ffc) {
            ctx->pc = 0x2D600Cu;
            goto label_2d600c;
        }
    }
    ctx->pc = 0x2D6004u;
    // 0x2d6004: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2D6004u;
    {
        const bool branch_taken_0x2d6004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6004u;
            // 0x2d6008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6004) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D600Cu;
label_2d600c:
    // 0x2d600c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D600Cu;
    SET_GPR_U32(ctx, 31, 0x2D6014u);
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6014u; }
        if (ctx->pc != 0x2D6014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6014u; }
        if (ctx->pc != 0x2D6014u) { return; }
    }
    ctx->pc = 0x2D6014u;
label_2d6014:
    // 0x2d6014: 0xc622006c  lwc1        $f2, 0x6C($s1)
    ctx->pc = 0x2d6014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6018: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d6018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d601c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d601cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d6020: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d6020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6024: 0x0  nop
    ctx->pc = 0x2d6024u;
    // NOP
    // 0x2d6028: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6028u;
    {
        const bool branch_taken_0x2d6028 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D602Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6028u;
            // 0x2d602c: 0x26240070  addiu       $a0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6028) {
            ctx->pc = 0x2D6038u;
            goto label_2d6038;
        }
    }
    ctx->pc = 0x2D6030u;
    // 0x2d6030: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2D6030u;
    {
        const bool branch_taken_0x2d6030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6030u;
            // 0x2d6034: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6030) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D6038u;
label_2d6038:
    // 0x2d6038: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D6038u;
    SET_GPR_U32(ctx, 31, 0x2D6040u);
    ctx->pc = 0x2D603Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6038u;
            // 0x2d603c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6040u; }
        if (ctx->pc != 0x2D6040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6040u; }
        if (ctx->pc != 0x2D6040u) { return; }
    }
    ctx->pc = 0x2D6040u;
label_2d6040:
    // 0x2d6040: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d6040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6044: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d6044u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6048: 0x0  nop
    ctx->pc = 0x2d6048u;
    // NOP
    // 0x2d604c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D604Cu;
    {
        const bool branch_taken_0x2d604c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D604Cu;
            // 0x2d6050: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d604c) {
            ctx->pc = 0x2D605Cu;
            goto label_2d605c;
        }
    }
    ctx->pc = 0x2D6054u;
    // 0x2d6054: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2D6054u;
    {
        const bool branch_taken_0x2d6054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6054u;
            // 0x2d6058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6054) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D605Cu;
label_2d605c:
    // 0x2d605c: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D605Cu;
    SET_GPR_U32(ctx, 31, 0x2D6064u);
    ctx->pc = 0x2D6060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D605Cu;
            // 0x2d6060: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6064u; }
        if (ctx->pc != 0x2D6064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6064u; }
        if (ctx->pc != 0x2D6064u) { return; }
    }
    ctx->pc = 0x2D6064u;
label_2d6064:
    // 0x2d6064: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d6064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6068: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d6068u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d606c: 0x0  nop
    ctx->pc = 0x2d606cu;
    // NOP
    // 0x2d6070: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6070u;
    {
        const bool branch_taken_0x2d6070 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6070u;
            // 0x2d6074: 0x26240090  addiu       $a0, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6070) {
            ctx->pc = 0x2D6080u;
            goto label_2d6080;
        }
    }
    ctx->pc = 0x2D6078u;
    // 0x2d6078: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2D6078u;
    {
        const bool branch_taken_0x2d6078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D607Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6078u;
            // 0x2d607c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6078) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D6080u;
label_2d6080:
    // 0x2d6080: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D6080u;
    SET_GPR_U32(ctx, 31, 0x2D6088u);
    ctx->pc = 0x2D6084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6080u;
            // 0x2d6084: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6088u; }
        if (ctx->pc != 0x2D6088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D6088u; }
        if (ctx->pc != 0x2D6088u) { return; }
    }
    ctx->pc = 0x2D6088u;
label_2d6088:
    // 0x2d6088: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d6088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d608c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d608cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6090: 0x0  nop
    ctx->pc = 0x2d6090u;
    // NOP
    // 0x2d6094: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6094u;
    {
        const bool branch_taken_0x2d6094 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D6094u;
            // 0x2d6098: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6094) {
            ctx->pc = 0x2D60A4u;
            goto label_2d60a4;
        }
    }
    ctx->pc = 0x2D609Cu;
    // 0x2d609c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2D609Cu;
    {
        const bool branch_taken_0x2d609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D60A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D609Cu;
            // 0x2d60a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d609c) {
            ctx->pc = 0x2D60C8u;
            goto label_2d60c8;
        }
    }
    ctx->pc = 0x2D60A4u;
label_2d60a4:
    // 0x2d60a4: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2D60A4u;
    SET_GPR_U32(ctx, 31, 0x2D60ACu);
    ctx->pc = 0x2D60A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D60A4u;
            // 0x2d60a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D60ACu; }
        if (ctx->pc != 0x2D60ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D60ACu; }
        if (ctx->pc != 0x2D60ACu) { return; }
    }
    ctx->pc = 0x2D60ACu;
label_2d60ac:
    // 0x2d60ac: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x2d60acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d60b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2d60b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d60b4: 0x0  nop
    ctx->pc = 0x2d60b4u;
    // NOP
    // 0x2d60b8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D60B8u;
    {
        const bool branch_taken_0x2d60b8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D60BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D60B8u;
            // 0x2d60bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d60b8) {
            ctx->pc = 0x2D60C4u;
            goto label_2d60c4;
        }
    }
    ctx->pc = 0x2D60C0u;
    // 0x2d60c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d60c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d60c4:
    // 0x2d60c4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2d60c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2d60c8:
    // 0x2d60c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d60c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d60cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d60ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d60d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d60d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d60d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D60D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D60D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D60D4u;
            // 0x2d60d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D60DCu;
}
