#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SET_MOS__FP12RS_STACKDATAi
// Address: 0x1e5f20 - 0x1e6010
void ps2__SET_MOS__FP12RS_STACKDATAi_0x1e5f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SET_MOS__FP12RS_STACKDATAi_0x1e5f20");
#endif

    switch (ctx->pc) {
        case 0x1e5f20u: goto label_1e5f20;
        case 0x1e5f24u: goto label_1e5f24;
        case 0x1e5f28u: goto label_1e5f28;
        case 0x1e5f2cu: goto label_1e5f2c;
        case 0x1e5f30u: goto label_1e5f30;
        case 0x1e5f34u: goto label_1e5f34;
        case 0x1e5f38u: goto label_1e5f38;
        case 0x1e5f3cu: goto label_1e5f3c;
        case 0x1e5f40u: goto label_1e5f40;
        case 0x1e5f44u: goto label_1e5f44;
        case 0x1e5f48u: goto label_1e5f48;
        case 0x1e5f4cu: goto label_1e5f4c;
        case 0x1e5f50u: goto label_1e5f50;
        case 0x1e5f54u: goto label_1e5f54;
        case 0x1e5f58u: goto label_1e5f58;
        case 0x1e5f5cu: goto label_1e5f5c;
        case 0x1e5f60u: goto label_1e5f60;
        case 0x1e5f64u: goto label_1e5f64;
        case 0x1e5f68u: goto label_1e5f68;
        case 0x1e5f6cu: goto label_1e5f6c;
        case 0x1e5f70u: goto label_1e5f70;
        case 0x1e5f74u: goto label_1e5f74;
        case 0x1e5f78u: goto label_1e5f78;
        case 0x1e5f7cu: goto label_1e5f7c;
        case 0x1e5f80u: goto label_1e5f80;
        case 0x1e5f84u: goto label_1e5f84;
        case 0x1e5f88u: goto label_1e5f88;
        case 0x1e5f8cu: goto label_1e5f8c;
        case 0x1e5f90u: goto label_1e5f90;
        case 0x1e5f94u: goto label_1e5f94;
        case 0x1e5f98u: goto label_1e5f98;
        case 0x1e5f9cu: goto label_1e5f9c;
        case 0x1e5fa0u: goto label_1e5fa0;
        case 0x1e5fa4u: goto label_1e5fa4;
        case 0x1e5fa8u: goto label_1e5fa8;
        case 0x1e5facu: goto label_1e5fac;
        case 0x1e5fb0u: goto label_1e5fb0;
        case 0x1e5fb4u: goto label_1e5fb4;
        case 0x1e5fb8u: goto label_1e5fb8;
        case 0x1e5fbcu: goto label_1e5fbc;
        case 0x1e5fc0u: goto label_1e5fc0;
        case 0x1e5fc4u: goto label_1e5fc4;
        case 0x1e5fc8u: goto label_1e5fc8;
        case 0x1e5fccu: goto label_1e5fcc;
        case 0x1e5fd0u: goto label_1e5fd0;
        case 0x1e5fd4u: goto label_1e5fd4;
        case 0x1e5fd8u: goto label_1e5fd8;
        case 0x1e5fdcu: goto label_1e5fdc;
        case 0x1e5fe0u: goto label_1e5fe0;
        case 0x1e5fe4u: goto label_1e5fe4;
        case 0x1e5fe8u: goto label_1e5fe8;
        case 0x1e5fecu: goto label_1e5fec;
        case 0x1e5ff0u: goto label_1e5ff0;
        case 0x1e5ff4u: goto label_1e5ff4;
        case 0x1e5ff8u: goto label_1e5ff8;
        case 0x1e5ffcu: goto label_1e5ffc;
        case 0x1e6000u: goto label_1e6000;
        case 0x1e6004u: goto label_1e6004;
        case 0x1e6008u: goto label_1e6008;
        case 0x1e600cu: goto label_1e600c;
        default: break;
    }

    ctx->pc = 0x1e5f20u;

label_1e5f20:
    // 0x1e5f20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e5f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e5f24:
    // 0x1e5f24: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1e5f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1e5f28:
    // 0x1e5f28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e5f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e5f2c:
    // 0x1e5f2c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1e5f2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f30:
    // 0x1e5f30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e5f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1e5f34:
    // 0x1e5f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f38:
    // 0x1e5f38: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e5f38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e5f3c:
    // 0x1e5f3c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1e5f3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1e5f40:
    // 0x1e5f40: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
label_1e5f44:
    if (ctx->pc == 0x1E5F44u) {
        ctx->pc = 0x1E5F44u;
            // 0x1e5f44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F48u;
        goto label_1e5f48;
    }
    ctx->pc = 0x1E5F40u;
    {
        const bool branch_taken_0x1e5f40 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1E5F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F40u;
            // 0x1e5f44: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f40) {
            ctx->pc = 0x1E5F54u;
            goto label_1e5f54;
        }
    }
    ctx->pc = 0x1E5F48u;
label_1e5f48:
    // 0x1e5f48: 0x28a10004  slti        $at, $a1, 0x4
    ctx->pc = 0x1e5f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_1e5f4c:
    // 0x1e5f4c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1e5f50:
    if (ctx->pc == 0x1E5F50u) {
        ctx->pc = 0x1E5F54u;
        goto label_1e5f54;
    }
    ctx->pc = 0x1E5F4Cu;
    {
        const bool branch_taken_0x1e5f4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5f4c) {
            ctx->pc = 0x1E5F5Cu;
            goto label_1e5f5c;
        }
    }
    ctx->pc = 0x1E5F54u;
label_1e5f54:
    // 0x1e5f54: 0x10000029  b           . + 4 + (0x29 << 2)
label_1e5f58:
    if (ctx->pc == 0x1E5F58u) {
        ctx->pc = 0x1E5F58u;
            // 0x1e5f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F5Cu;
        goto label_1e5f5c;
    }
    ctx->pc = 0x1E5F54u;
    {
        const bool branch_taken_0x1e5f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F54u;
            // 0x1e5f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f54) {
            ctx->pc = 0x1E5FFCu;
            goto label_1e5ffc;
        }
    }
    ctx->pc = 0x1E5F5Cu;
label_1e5f5c:
    // 0x1e5f5c: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
label_1e5f60:
    if (ctx->pc == 0x1E5F60u) {
        ctx->pc = 0x1E5F60u;
            // 0x1e5f60: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1E5F64u;
        goto label_1e5f64;
    }
    ctx->pc = 0x1E5F5Cu;
    {
        const bool branch_taken_0x1e5f5c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1E5F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F5Cu;
            // 0x1e5f60: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f5c) {
            ctx->pc = 0x1E5F74u;
            goto label_1e5f74;
        }
    }
    ctx->pc = 0x1E5F64u;
label_1e5f64:
    // 0x1e5f64: 0xc0781b8  jal         func_1E06E0
label_1e5f68:
    if (ctx->pc == 0x1E5F68u) {
        ctx->pc = 0x1E5F68u;
            // 0x1e5f68: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E5F6Cu;
        goto label_1e5f6c;
    }
    ctx->pc = 0x1E5F64u;
    SET_GPR_U32(ctx, 31, 0x1E5F6Cu);
    ctx->pc = 0x1E5F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F64u;
            // 0x1e5f68: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06E0u;
    if (runtime->hasFunction(0x1E06E0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F6Cu; }
        if (ctx->pc != 0x1E5F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackString__FP12RS_STACKDATA_0x1e06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F6Cu; }
        if (ctx->pc != 0x1E5F6Cu) { return; }
    }
    ctx->pc = 0x1E5F6Cu;
label_1e5f6c:
    // 0x1e5f6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f70:
    // 0x1e5f70: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x1e5f70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_1e5f74:
    // 0x1e5f74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1e5f78:
    if (ctx->pc == 0x1E5F78u) {
        ctx->pc = 0x1E5F78u;
            // 0x1e5f78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1E5F7Cu;
        goto label_1e5f7c;
    }
    ctx->pc = 0x1E5F74u;
    {
        const bool branch_taken_0x1e5f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F74u;
            // 0x1e5f78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f74) {
            ctx->pc = 0x1E5F90u;
            goto label_1e5f90;
        }
    }
    ctx->pc = 0x1E5F7Cu;
label_1e5f7c:
    // 0x1e5f7c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1e5f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1e5f80:
    // 0x1e5f80: 0xc0781ac  jal         func_1E06B0
label_1e5f84:
    if (ctx->pc == 0x1E5F84u) {
        ctx->pc = 0x1E5F84u;
            // 0x1e5f84: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x1E5F88u;
        goto label_1e5f88;
    }
    ctx->pc = 0x1E5F80u;
    SET_GPR_U32(ctx, 31, 0x1E5F88u);
    ctx->pc = 0x1E5F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F80u;
            // 0x1e5f84: 0x24830008  addiu       $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E06B0u;
    if (runtime->hasFunction(0x1E06B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E06B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F88u; }
        if (ctx->pc != 0x1E5F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackFloat__FP12RS_STACKDATA_0x1e06b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5F88u; }
        if (ctx->pc != 0x1E5F88u) { return; }
    }
    ctx->pc = 0x1E5F88u;
label_1e5f88:
    // 0x1e5f88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1e5f88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1e5f8c:
    // 0x1e5f8c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e5f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1e5f90:
    // 0x1e5f90: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_1e5f94:
    if (ctx->pc == 0x1E5F94u) {
        ctx->pc = 0x1E5F94u;
            // 0x1e5f94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F98u;
        goto label_1e5f98;
    }
    ctx->pc = 0x1E5F90u;
    {
        const bool branch_taken_0x1e5f90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5F90u;
            // 0x1e5f94: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f90) {
            ctx->pc = 0x1E5FA4u;
            goto label_1e5fa4;
        }
    }
    ctx->pc = 0x1E5F98u;
label_1e5f98:
    // 0x1e5f98: 0xc07819c  jal         func_1E0670
label_1e5f9c:
    if (ctx->pc == 0x1E5F9Cu) {
        ctx->pc = 0x1E5FA0u;
        goto label_1e5fa0;
    }
    ctx->pc = 0x1E5F98u;
    SET_GPR_U32(ctx, 31, 0x1E5FA0u);
    ctx->pc = 0x1E0670u;
    if (runtime->hasFunction(0x1E0670u)) {
        auto targetFn = runtime->lookupFunction(0x1E0670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FA0u; }
        if (ctx->pc != 0x1E5FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x1e0670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FA0u; }
        if (ctx->pc != 0x1E5FA0u) { return; }
    }
    ctx->pc = 0x1E5FA0u;
label_1e5fa0:
    // 0x1e5fa0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1e5fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fa4:
    // 0x1e5fa4: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1e5fa8:
    if (ctx->pc == 0x1E5FA8u) {
        ctx->pc = 0x1E5FA8u;
            // 0x1e5fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FACu;
        goto label_1e5fac;
    }
    ctx->pc = 0x1E5FA4u;
    {
        const bool branch_taken_0x1e5fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FA4u;
            // 0x1e5fa8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fa4) {
            ctx->pc = 0x1E5FB4u;
            goto label_1e5fb4;
        }
    }
    ctx->pc = 0x1E5FACu;
label_1e5fac:
    // 0x1e5fac: 0x10000014  b           . + 4 + (0x14 << 2)
label_1e5fb0:
    if (ctx->pc == 0x1E5FB0u) {
        ctx->pc = 0x1E5FB0u;
            // 0x1e5fb0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E5FB4u;
        goto label_1e5fb4;
    }
    ctx->pc = 0x1E5FACu;
    {
        const bool branch_taken_0x1e5fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FACu;
            // 0x1e5fb0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fac) {
            ctx->pc = 0x1E6000u;
            goto label_1e6000;
        }
    }
    ctx->pc = 0x1E5FB4u;
label_1e5fb4:
    // 0x1e5fb4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e5fb8:
    // 0x1e5fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e5fbc:
    // 0x1e5fbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5fc0:
    // 0x1e5fc0: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x1e5fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_1e5fc4:
    // 0x1e5fc4: 0x320f809  jalr        $t9
label_1e5fc8:
    if (ctx->pc == 0x1E5FC8u) {
        ctx->pc = 0x1E5FC8u;
            // 0x1e5fc8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E5FCCu;
        goto label_1e5fcc;
    }
    ctx->pc = 0x1E5FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5FCCu);
        ctx->pc = 0x1E5FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FC4u;
            // 0x1e5fc8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5FCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FCCu; }
            if (ctx->pc != 0x1E5FCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E5FCCu;
label_1e5fcc:
    // 0x1e5fcc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e5fccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1e5fd0:
    // 0x1e5fd0: 0x0  nop
    ctx->pc = 0x1e5fd0u;
    // NOP
label_1e5fd4:
    // 0x1e5fd4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1e5fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e5fd8:
    // 0x1e5fd8: 0x0  nop
    ctx->pc = 0x1e5fd8u;
    // NOP
label_1e5fdc:
    // 0x1e5fdc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_1e5fe0:
    if (ctx->pc == 0x1E5FE0u) {
        ctx->pc = 0x1E5FE0u;
            // 0x1e5fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E5FE4u;
        goto label_1e5fe4;
    }
    ctx->pc = 0x1E5FDCu;
    {
        const bool branch_taken_0x1e5fdc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FDCu;
            // 0x1e5fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5fdc) {
            ctx->pc = 0x1E5FFCu;
            goto label_1e5ffc;
        }
    }
    ctx->pc = 0x1E5FE4u;
label_1e5fe4:
    // 0x1e5fe4: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e5fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e5fe8:
    // 0x1e5fe8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e5fe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e5fec:
    // 0x1e5fec: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x1e5fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_1e5ff0:
    // 0x1e5ff0: 0x320f809  jalr        $t9
label_1e5ff4:
    if (ctx->pc == 0x1E5FF4u) {
        ctx->pc = 0x1E5FF4u;
            // 0x1e5ff4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1E5FF8u;
        goto label_1e5ff8;
    }
    ctx->pc = 0x1E5FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E5FF8u);
        ctx->pc = 0x1E5FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E5FF0u;
            // 0x1e5ff4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E5FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E5FF8u; }
            if (ctx->pc != 0x1E5FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x1E5FF8u;
label_1e5ff8:
    // 0x1e5ff8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5ffc:
    // 0x1e5ffc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e5ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e6000:
    // 0x1e6000: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e6000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e6004:
    // 0x1e6004: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e6004u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e6008:
    // 0x1e6008: 0x3e00008  jr          $ra
label_1e600c:
    if (ctx->pc == 0x1E600Cu) {
        ctx->pc = 0x1E600Cu;
            // 0x1e600c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E6010u;
        goto label_fallthrough_0x1e6008;
    }
    ctx->pc = 0x1E6008u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E600Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6008u;
            // 0x1e600c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e6008:
    ctx->pc = 0x1E6010u;
}
