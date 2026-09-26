#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: vpiWAIT__FP9SPI_STACKi
// Address: 0x31a120 - 0x31a1f4
void vpiWAIT__FP9SPI_STACKi_0x31a120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("vpiWAIT__FP9SPI_STACKi_0x31a120");
#endif

    switch (ctx->pc) {
        case 0x31a158u: goto label_31a158;
        case 0x31a17cu: goto label_31a17c;
        case 0x31a194u: goto label_31a194;
        case 0x31a1b0u: goto label_31a1b0;
        case 0x31a1c8u: goto label_31a1c8;
        case 0x31a1d0u: goto label_31a1d0;
        default: break;
    }

    ctx->pc = 0x31a120u;

    // 0x31a120: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31a120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31a124: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x31a124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x31a128: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x31a128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x31a12c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31a130: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x31a130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a134: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31a134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31a138: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31a138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31a13c: 0x8f84a374  lw          $a0, -0x5C8C($gp)
    ctx->pc = 0x31a13cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943604)));
    // 0x31a140: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A140u;
    {
        const bool branch_taken_0x31a140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A140u;
            // 0x31a144: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a140) {
            ctx->pc = 0x31A150u;
            goto label_31a150;
        }
    }
    ctx->pc = 0x31A148u;
    // 0x31a148: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x31A148u;
    {
        const bool branch_taken_0x31a148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A148u;
            // 0x31a14c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a148) {
            ctx->pc = 0x31A1D8u;
            goto label_31a1d8;
        }
    }
    ctx->pc = 0x31A150u;
label_31a150:
    // 0x31a150: 0xc0b3464  jal         func_2CD190
    ctx->pc = 0x31A150u;
    SET_GPR_U32(ctx, 31, 0x31A158u);
    ctx->pc = 0x31A154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A150u;
            // 0x31a154: 0x8f85a370  lw          $a1, -0x5C90($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943600)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD190u;
    if (runtime->hasFunction(0x2CD190u)) {
        auto targetFn = runtime->lookupFunction(0x2CD190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A158u; }
        if (ctx->pc != 0x31A158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Add__18CVillagerPlaceInfoFP9mgCMemory_0x2cd190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A158u; }
        if (ctx->pc != 0x31A158u) { return; }
    }
    ctx->pc = 0x31A158u;
label_31a158:
    // 0x31a158: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x31a158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a15c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A15Cu;
    {
        const bool branch_taken_0x31a15c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A15Cu;
            // 0x31a160: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a15c) {
            ctx->pc = 0x31A16Cu;
            goto label_31a16c;
        }
    }
    ctx->pc = 0x31A164u;
    // 0x31a164: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x31A164u;
    {
        const bool branch_taken_0x31a164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A164u;
            // 0x31a168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a164) {
            ctx->pc = 0x31A1D8u;
            goto label_31a1d8;
        }
    }
    ctx->pc = 0x31A16Cu;
label_31a16c:
    // 0x31a16c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a170: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x31a170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x31a174: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A174u;
    SET_GPR_U32(ctx, 31, 0x31A17Cu);
    ctx->pc = 0x31A178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A174u;
            // 0x31a178: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A17Cu; }
        if (ctx->pc != 0x31A17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A17Cu; }
        if (ctx->pc != 0x31A17Cu) { return; }
    }
    ctx->pc = 0x31A17Cu;
label_31a17c:
    // 0x31a17c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x31A17Cu;
    {
        const bool branch_taken_0x31a17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A17Cu;
            // 0x31a180: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a17c) {
            ctx->pc = 0x31A1A0u;
            goto label_31a1a0;
        }
    }
    ctx->pc = 0x31A184u;
    // 0x31a184: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x31a184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x31a188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31a188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a18c: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x31A18Cu;
    SET_GPR_U32(ctx, 31, 0x31A194u);
    ctx->pc = 0x31A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A18Cu;
            // 0x31a190: 0x24a52ac0  addiu       $a1, $a1, 0x2AC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A194u; }
        if (ctx->pc != 0x31A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A194u; }
        if (ctx->pc != 0x31A194u) { return; }
    }
    ctx->pc = 0x31A194u;
label_31a194:
    // 0x31a194: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A194u;
    {
        const bool branch_taken_0x31a194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A194u;
            // 0x31a198: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a194) {
            ctx->pc = 0x31A1A4u;
            goto label_31a1a4;
        }
    }
    ctx->pc = 0x31A19Cu;
    // 0x31a19c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x31a19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a1a0:
    // 0x31a1a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31a1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31a1a4:
    // 0x31a1a4: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x31a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x31a1a8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x31A1A8u;
    SET_GPR_U32(ctx, 31, 0x31A1B0u);
    ctx->pc = 0x31A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A1A8u;
            // 0x31a1ac: 0x24930008  addiu       $s3, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A1B0u; }
        if (ctx->pc != 0x31A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A1B0u; }
        if (ctx->pc != 0x31A1B0u) { return; }
    }
    ctx->pc = 0x31A1B0u;
label_31a1b0:
    // 0x31a1b0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x31a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x31a1b4: 0x2a430003  slti        $v1, $s2, 0x3
    ctx->pc = 0x31a1b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31a1b8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31A1B8u;
    {
        const bool branch_taken_0x31a1b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A1B8u;
            // 0x31a1bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a1b8) {
            ctx->pc = 0x31A1C8u;
            goto label_31a1c8;
        }
    }
    ctx->pc = 0x31A1C0u;
    // 0x31a1c0: 0xc05191c  jal         func_146470
    ctx->pc = 0x31A1C0u;
    SET_GPR_U32(ctx, 31, 0x31A1C8u);
    ctx->pc = 0x31A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A1C0u;
            // 0x31a1c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A1C8u; }
        if (ctx->pc != 0x31A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A1C8u; }
        if (ctx->pc != 0x31A1C8u) { return; }
    }
    ctx->pc = 0x31A1C8u;
label_31a1c8:
    // 0x31a1c8: 0xc0c68e8  jal         func_31A3A0
    ctx->pc = 0x31A1C8u;
    SET_GPR_U32(ctx, 31, 0x31A1D0u);
    ctx->pc = 0x31A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31A1C8u;
            // 0x31a1cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31A3A0u;
    if (runtime->hasFunction(0x31A3A0u)) {
        auto targetFn = runtime->lookupFunction(0x31A3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A1D0u; }
        if (ctx->pc != 0x31A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        vpiGetMotionID__FPc_0x31a3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31A1D0u; }
        if (ctx->pc != 0x31A1D0u) { return; }
    }
    ctx->pc = 0x31A1D0u;
label_31a1d0:
    // 0x31a1d0: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x31a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x31a1d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31a1d8:
    // 0x31a1d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x31a1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31a1dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x31a1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31a1e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31a1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a1e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31a1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31a1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31a1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31A1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A1ECu;
            // 0x31a1f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A1F4u;
}
