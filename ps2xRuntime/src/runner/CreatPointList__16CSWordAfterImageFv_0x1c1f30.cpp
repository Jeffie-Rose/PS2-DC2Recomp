#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatPointList__16CSWordAfterImageFv
// Address: 0x1c1f30 - 0x1c20ac
void CreatPointList__16CSWordAfterImageFv_0x1c1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPointList__16CSWordAfterImageFv_0x1c1f30");
#endif

    switch (ctx->pc) {
        case 0x1c1f60u: goto label_1c1f60;
        case 0x1c1f80u: goto label_1c1f80;
        case 0x1c1f94u: goto label_1c1f94;
        case 0x1c2034u: goto label_1c2034;
        default: break;
    }

    ctx->pc = 0x1c1f30u;

    // 0x1c1f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c1f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c1f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c1f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c1f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c1f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c1f3c: 0x8c86004c  lw          $a2, 0x4C($a0)
    ctx->pc = 0x1c1f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1c1f40: 0x18c00056  blez        $a2, . + 4 + (0x56 << 2)
    ctx->pc = 0x1C1F40u;
    {
        const bool branch_taken_0x1c1f40 = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C1F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F40u;
            // 0x1c1f44: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f40) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1F48u;
    // 0x1c1f48: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1c1f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1c1f4c: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x1c1f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c1f50: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x1c1f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1c1f54: 0x8e090048  lw          $t1, 0x48($s0)
    ctx->pc = 0x1c1f54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1c1f58: 0xc072324  jal         func_1C8C90
    ctx->pc = 0x1C1F58u;
    SET_GPR_U32(ctx, 31, 0x1C1F60u);
    ctx->pc = 0x1C1F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F58u;
            // 0x1c1f5c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C90u;
    if (runtime->hasFunction(0x1C8C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F60u; }
        if (ctx->pc != 0x1C1F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F60u; }
        if (ctx->pc != 0x1C1F60u) { return; }
    }
    ctx->pc = 0x1C1F60u;
label_1c1f60:
    // 0x1c1f60: 0xae020044  sw          $v0, 0x44($s0)
    ctx->pc = 0x1c1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 2));
    // 0x1c1f64: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1c1f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c1f68: 0x8e06004c  lw          $a2, 0x4C($s0)
    ctx->pc = 0x1c1f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c1f6c: 0x8e070040  lw          $a3, 0x40($s0)
    ctx->pc = 0x1c1f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c1f70: 0x8e080054  lw          $t0, 0x54($s0)
    ctx->pc = 0x1c1f70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1c1f74: 0x8e090048  lw          $t1, 0x48($s0)
    ctx->pc = 0x1c1f74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1c1f78: 0xc072324  jal         func_1C8C90
    ctx->pc = 0x1C1F78u;
    SET_GPR_U32(ctx, 31, 0x1C1F80u);
    ctx->pc = 0x1C1F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F78u;
            // 0x1c1f7c: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C8C90u;
    if (runtime->hasFunction(0x1C8C90u)) {
        auto targetFn = runtime->lookupFunction(0x1C8C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F80u; }
        if (ctx->pc != 0x1C1F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatSmoothPass__FPA4_fPA4_fiiii_0x1c8c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C1F80u; }
        if (ctx->pc != 0x1C1F80u) { return; }
    }
    ctx->pc = 0x1C1F80u;
label_1c1f80:
    // 0x1c1f80: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1c1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c1f84: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x1C1F84u;
    {
        const bool branch_taken_0x1c1f84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F84u;
            // 0x1c1f88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f84) {
            ctx->pc = 0x1C209Cu;
            goto label_1c209c;
        }
    }
    ctx->pc = 0x1C1F8Cu;
    // 0x1c1f8c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x1C1F8Cu;
    {
        const bool branch_taken_0x1c1f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1F8Cu;
            // 0x1c1f90: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1f8c) {
            ctx->pc = 0x1C2088u;
            goto label_1c2088;
        }
    }
    ctx->pc = 0x1C1F94u;
label_1c1f94:
    // 0x1c1f94: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1c1f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1c1f98: 0x8e080048  lw          $t0, 0x48($s0)
    ctx->pc = 0x1c1f98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1c1f9c: 0x853821  addu        $a3, $a0, $a1
    ctx->pc = 0x1c1f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1c1fa0: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x1c1fa0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c1fa4: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1FA4u;
    {
        const bool branch_taken_0x1c1fa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C1FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C1FA4u;
            // 0x1c1fa8: 0x24e60001  addiu       $a2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1fa4) {
            ctx->pc = 0x1C1FB0u;
            goto label_1c1fb0;
        }
    }
    ctx->pc = 0x1C1FACu;
    // 0x1c1fac: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x1c1facu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1c1fb0:
    // 0x1c1fb0: 0x4e10002  bgez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1FB0u;
    {
        const bool branch_taken_0x1c1fb0 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1c1fb0) {
            ctx->pc = 0x1C1FBCu;
            goto label_1c1fbc;
        }
    }
    ctx->pc = 0x1C1FB8u;
    // 0x1c1fb8: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x1c1fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_1c1fbc:
    // 0x1c1fbc: 0x0  nop
    ctx->pc = 0x1c1fbcu;
    // NOP
    // 0x1c1fc0: 0xc8282a  slt         $a1, $a2, $t0
    ctx->pc = 0x1c1fc0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x1c1fc4: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1FC4u;
    {
        const bool branch_taken_0x1c1fc4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1fc4) {
            ctx->pc = 0x1C1FD0u;
            goto label_1c1fd0;
        }
    }
    ctx->pc = 0x1C1FCCu;
    // 0x1c1fcc: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x1c1fccu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1c1fd0:
    // 0x1c1fd0: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C1FD0u;
    {
        const bool branch_taken_0x1c1fd0 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1c1fd0) {
            ctx->pc = 0x1C1FDCu;
            goto label_1c1fdc;
        }
    }
    ctx->pc = 0x1C1FD8u;
    // 0x1c1fd8: 0xc83021  addu        $a2, $a2, $t0
    ctx->pc = 0x1c1fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1c1fdc:
    // 0x1c1fdc: 0x0  nop
    ctx->pc = 0x1c1fdcu;
    // NOP
    // 0x1c1fe0: 0x8e0a0008  lw          $t2, 0x8($s0)
    ctx->pc = 0x1c1fe0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c1fe4: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x1c1fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1c1fe8: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1c1fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1c1fec: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1c1fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c1ff0: 0x35880  sll         $t3, $v1, 2
    ctx->pc = 0x1c1ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c1ff4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c1ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c1ff8: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1c1ff8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c1ffc: 0x1473821  addu        $a3, $t2, $a3
    ctx->pc = 0x1c1ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x1c2000: 0x1463021  addu        $a2, $t2, $a2
    ctx->pc = 0x1c2000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1c2004: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x1c2004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c2008: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1c2008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c200c: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x1c200cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1c2010: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x1c2010u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1c2014: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x1c2014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c2018: 0x46030081  sub.s       $f2, $f0, $f3
    ctx->pc = 0x1c2018u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1c201c: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1c201cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c2020: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1c2020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1c2024: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1c2024u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1c2028: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x1c2028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1c202c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C202Cu;
    {
        const bool branch_taken_0x1c202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C202Cu;
            // 0x1c2030: 0xe4a0fffc  swc1        $f0, -0x4($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c202c) {
            ctx->pc = 0x1C2070u;
            goto label_1c2070;
        }
    }
    ctx->pc = 0x1C2034u;
label_1c2034:
    // 0x1c2034: 0x0  nop
    ctx->pc = 0x1c2034u;
    // NOP
    // 0x1c2038: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x1c2038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1c203c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1c203cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c2040: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1c2040u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2044: 0x0  nop
    ctx->pc = 0x1c2044u;
    // NOP
    // 0x1c2048: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1c2048u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1c204c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1c204cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c2050: 0x1652821  addu        $a1, $t3, $a1
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x1c2054: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x1c2054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x1c2058: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x1c2058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x1c205c: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x1c205cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x1c2060: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c2060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1c2064: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c2064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c2068: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x1c2068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1c206c: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x1c206cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_1c2070:
    // 0x1c2070: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1c2070u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1c2074: 0x106282a  slt         $a1, $t0, $a2
    ctx->pc = 0x1c2074u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c2078: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1C2078u;
    {
        const bool branch_taken_0x1c2078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2078) {
            ctx->pc = 0x1C2034u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c2034;
        }
    }
    ctx->pc = 0x1C2080u;
    // 0x1c2080: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1c2084: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1c2088:
    // 0x1c2088: 0x8e05004c  lw          $a1, 0x4C($s0)
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1c208c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c2090: 0x85282a  slt         $a1, $a0, $a1
    ctx->pc = 0x1c2090u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c2094: 0x14a0ffbf  bnez        $a1, . + 4 + (-0x41 << 2)
    ctx->pc = 0x1C2094u;
    {
        const bool branch_taken_0x1c2094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c2094) {
            ctx->pc = 0x1C1F94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c1f94;
        }
    }
    ctx->pc = 0x1C209Cu;
label_1c209c:
    // 0x1c209c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c20a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C20A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C20A4u;
            // 0x1c20a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C20ACu;
}
