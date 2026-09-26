#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _GET_VALUE__FP12RS_STACKDATAi
// Address: 0x2e3f40 - 0x2e3ffc
void ps2__GET_VALUE__FP12RS_STACKDATAi_0x2e3f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__GET_VALUE__FP12RS_STACKDATAi_0x2e3f40");
#endif

    switch (ctx->pc) {
        case 0x2e3f64u: goto label_2e3f64;
        case 0x2e3fb8u: goto label_2e3fb8;
        case 0x2e3fd8u: goto label_2e3fd8;
        default: break;
    }

    ctx->pc = 0x2e3f40u;

    // 0x2e3f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e3f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e3f44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e3f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e3f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e3f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e3f4c: 0x10a20003  beq         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3F4Cu;
    {
        const bool branch_taken_0x2e3f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E3F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F4Cu;
            // 0x2e3f50: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f4c) {
            ctx->pc = 0x2E3F5Cu;
            goto label_2e3f5c;
        }
    }
    ctx->pc = 0x2E3F54u;
    // 0x2e3f54: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E3F54u;
    {
        const bool branch_taken_0x2e3f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F54u;
            // 0x2e3f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f54) {
            ctx->pc = 0x2E3FECu;
            goto label_2e3fec;
        }
    }
    ctx->pc = 0x2E3F5Cu;
label_2e3f5c:
    // 0x2e3f5c: 0xc0b8ca0  jal         func_2E3280
    ctx->pc = 0x2E3F5Cu;
    SET_GPR_U32(ctx, 31, 0x2E3F64u);
    ctx->pc = 0x2E3F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F5Cu;
            // 0x2e3f60: 0x24900008  addiu       $s0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3280u;
    if (runtime->hasFunction(0x2E3280u)) {
        auto targetFn = runtime->lookupFunction(0x2E3280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F64u; }
        if (ctx->pc != 0x2E3F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x2e3280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3F64u; }
        if (ctx->pc != 0x2E3F64u) { return; }
    }
    ctx->pc = 0x2E3F64u;
label_2e3f64:
    // 0x2e3f64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e3f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e3f68: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e3f6c: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3F6Cu;
    {
        const bool branch_taken_0x2e3f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3f6c) {
            ctx->pc = 0x2E3F7Cu;
            goto label_2e3f7c;
        }
    }
    ctx->pc = 0x2E3F74u;
    // 0x2e3f74: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2E3F74u;
    {
        const bool branch_taken_0x2e3f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F74u;
            // 0x2e3f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f74) {
            ctx->pc = 0x2E3FECu;
            goto label_2e3fec;
        }
    }
    ctx->pc = 0x2E3F7Cu;
label_2e3f7c:
    // 0x2e3f7c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2e3f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e3f80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e3f84: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2e3f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2e3f88: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2E3F88u;
    {
        const bool branch_taken_0x2e3f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e3f88) {
            ctx->pc = 0x2E3FC0u;
            goto label_2e3fc0;
        }
    }
    ctx->pc = 0x2E3F90u;
    // 0x2e3f90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3F90u;
    {
        const bool branch_taken_0x2e3f90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3f90) {
            ctx->pc = 0x2E3FA0u;
            goto label_2e3fa0;
        }
    }
    ctx->pc = 0x2E3F98u;
    // 0x2e3f98: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E3F98u;
    {
        const bool branch_taken_0x2e3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3F98u;
            // 0x2e3f9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3f98) {
            ctx->pc = 0x2E3FE0u;
            goto label_2e3fe0;
        }
    }
    ctx->pc = 0x2E3FA0u;
label_2e3fa0:
    // 0x2e3fa0: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3fa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e3fa8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3fac: 0x8c450114  lw          $a1, 0x114($v0)
    ctx->pc = 0x2e3facu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 276)));
    // 0x2e3fb0: 0xc0b8cd4  jal         func_2E3350
    ctx->pc = 0x2E3FB0u;
    SET_GPR_U32(ctx, 31, 0x2E3FB8u);
    ctx->pc = 0x2E3FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FB0u;
            // 0x2e3fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3350u;
    if (runtime->hasFunction(0x2E3350u)) {
        auto targetFn = runtime->lookupFunction(0x2E3350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FB8u; }
        if (ctx->pc != 0x2E3FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAi_0x2e3350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FB8u; }
        if (ctx->pc != 0x2E3FB8u) { return; }
    }
    ctx->pc = 0x2E3FB8u;
label_2e3fb8:
    // 0x2e3fb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2E3FB8u;
    {
        const bool branch_taken_0x2e3fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FB8u;
            // 0x2e3fbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fb8) {
            ctx->pc = 0x2E3FECu;
            goto label_2e3fec;
        }
    }
    ctx->pc = 0x2E3FC0u;
label_2e3fc0:
    // 0x2e3fc0: 0x8f839ed0  lw          $v1, -0x6130($gp)
    ctx->pc = 0x2e3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942416)));
    // 0x2e3fc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e3fc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2e3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e3fcc: 0xc44c0114  lwc1        $f12, 0x114($v0)
    ctx->pc = 0x2e3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e3fd0: 0xc0b8cdc  jal         func_2E3370
    ctx->pc = 0x2E3FD0u;
    SET_GPR_U32(ctx, 31, 0x2E3FD8u);
    ctx->pc = 0x2E3FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FD0u;
            // 0x2e3fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E3370u;
    if (runtime->hasFunction(0x2E3370u)) {
        auto targetFn = runtime->lookupFunction(0x2E3370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FD8u; }
        if (ctx->pc != 0x2E3FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__FP12RS_STACKDATAf_0x2e3370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E3FD8u; }
        if (ctx->pc != 0x2E3FD8u) { return; }
    }
    ctx->pc = 0x2E3FD8u;
label_2e3fd8:
    // 0x2e3fd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3FD8u;
    {
        const bool branch_taken_0x2e3fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e3fd8) {
            ctx->pc = 0x2E3FE8u;
            goto label_2e3fe8;
        }
    }
    ctx->pc = 0x2E3FE0u;
label_2e3fe0:
    // 0x2e3fe0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E3FE0u;
    {
        const bool branch_taken_0x2e3fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FE0u;
            // 0x2e3fe4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3fe0) {
            ctx->pc = 0x2E3FF0u;
            goto label_2e3ff0;
        }
    }
    ctx->pc = 0x2E3FE8u;
label_2e3fe8:
    // 0x2e3fe8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e3fec:
    // 0x2e3fec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e3fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2e3ff0:
    // 0x2e3ff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e3ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E3FF4u;
            // 0x2e3ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E3FFCu;
}
