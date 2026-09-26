#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_ETCINFO__FP9SPI_STACKi
// Address: 0x251950 - 0x251a50
void ps2__MENU_ETCINFO__FP9SPI_STACKi_0x251950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_ETCINFO__FP9SPI_STACKi_0x251950");
#endif

    switch (ctx->pc) {
        case 0x2519acu: goto label_2519ac;
        case 0x2519c4u: goto label_2519c4;
        case 0x2519d0u: goto label_2519d0;
        case 0x251a04u: goto label_251a04;
        case 0x251a14u: goto label_251a14;
        case 0x251a20u: goto label_251a20;
        default: break;
    }

    ctx->pc = 0x251950u;

    // 0x251950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x251950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x251954: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x251954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x251958: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x251958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x25195c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25195cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x251960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x251960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x251964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251968: 0x878397b4  lh          $v1, -0x684C($gp)
    ctx->pc = 0x251968u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940596)));
    // 0x25196c: 0x878297b8  lh          $v0, -0x6848($gp)
    ctx->pc = 0x25196cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940600)));
    // 0x251970: 0x8f859450  lw          $a1, -0x6BB0($gp)
    ctx->pc = 0x251970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251974: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x251974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x251978: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x251978u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25197c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x25197cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251980: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251980u;
    {
        const bool branch_taken_0x251980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251980u;
            // 0x251984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251980) {
            ctx->pc = 0x251990u;
            goto label_251990;
        }
    }
    ctx->pc = 0x251988u;
    // 0x251988: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x251988u;
    {
        const bool branch_taken_0x251988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25198Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251988u;
            // 0x25198c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251988) {
            ctx->pc = 0x251A38u;
            goto label_251a38;
        }
    }
    ctx->pc = 0x251990u;
label_251990:
    // 0x251990: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x251990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x251994: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x251994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x251998: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x251998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x25199c: 0x24920008  addiu       $s2, $a0, 0x8
    ctx->pc = 0x25199cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2519a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2519a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2519a4: 0xc05191c  jal         func_146470
    ctx->pc = 0x2519A4u;
    SET_GPR_U32(ctx, 31, 0x2519ACu);
    ctx->pc = 0x2519A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2519A4u;
            // 0x2519a8: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519ACu; }
        if (ctx->pc != 0x2519ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519ACu; }
        if (ctx->pc != 0x2519ACu) { return; }
    }
    ctx->pc = 0x2519ACu;
label_2519ac:
    // 0x2519ac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2519acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2519b0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2519b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2519b4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2519B4u;
    {
        const bool branch_taken_0x2519b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519B4u;
            // 0x2519b8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519b4) {
            ctx->pc = 0x2519F8u;
            goto label_2519f8;
        }
    }
    ctx->pc = 0x2519BCu;
    // 0x2519bc: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x2519BCu;
    {
        const bool branch_taken_0x2519bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519BCu;
            // 0x2519c0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519bc) {
            ctx->pc = 0x2519F0u;
            goto label_2519f0;
        }
    }
    ctx->pc = 0x2519C4u;
label_2519c4:
    // 0x2519c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2519c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2519c8: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x2519C8u;
    SET_GPR_U32(ctx, 31, 0x2519D0u);
    ctx->pc = 0x2519CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2519C8u;
            // 0x2519cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519D0u; }
        if (ctx->pc != 0x2519D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2519D0u; }
        if (ctx->pc != 0x2519D0u) { return; }
    }
    ctx->pc = 0x2519D0u;
label_2519d0:
    // 0x2519d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2519D0u;
    {
        const bool branch_taken_0x2519d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2519D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519D0u;
            // 0x2519d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519d0) {
            ctx->pc = 0x2519E0u;
            goto label_2519e0;
        }
    }
    ctx->pc = 0x2519D8u;
    // 0x2519d8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2519D8u;
    {
        const bool branch_taken_0x2519d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2519d8) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x2519E0u;
label_2519e0:
    // 0x2519e0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2519e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x2519e4: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x2519e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2519e8: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2519E8u;
    {
        const bool branch_taken_0x2519e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2519e8) {
            ctx->pc = 0x2519C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2519c4;
        }
    }
    ctx->pc = 0x2519F0u;
label_2519f0:
    // 0x2519f0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2519F0u;
    {
        const bool branch_taken_0x2519f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2519F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2519F0u;
            // 0x2519f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2519f0) {
            ctx->pc = 0x251A34u;
            goto label_251a34;
        }
    }
    ctx->pc = 0x2519F8u;
label_2519f8:
    // 0x2519f8: 0x8f8597b0  lw          $a1, -0x6850($gp)
    ctx->pc = 0x2519f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
    // 0x2519fc: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2519FCu;
    SET_GPR_U32(ctx, 31, 0x251A04u);
    ctx->pc = 0x251A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2519FCu;
            // 0x251a00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A04u; }
        if (ctx->pc != 0x251A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A04u; }
        if (ctx->pc != 0x251A04u) { return; }
    }
    ctx->pc = 0x251A04u;
label_251a04:
    // 0x251a04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a08: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x251a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x251a0c: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251A0Cu;
    SET_GPR_U32(ctx, 31, 0x251A14u);
    ctx->pc = 0x251A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251A0Cu;
            // 0x251a10: 0x24920008  addiu       $s2, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A14u; }
        if (ctx->pc != 0x251A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A14u; }
        if (ctx->pc != 0x251A14u) { return; }
    }
    ctx->pc = 0x251A14u;
label_251a14:
    // 0x251a14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251a18: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251A18u;
    SET_GPR_U32(ctx, 31, 0x251A20u);
    ctx->pc = 0x251A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251A18u;
            // 0x251a1c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A20u; }
        if (ctx->pc != 0x251A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251A20u; }
        if (ctx->pc != 0x251A20u) { return; }
    }
    ctx->pc = 0x251A20u;
label_251a20:
    // 0x251a20: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x251a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x251a24: 0x878397b8  lh          $v1, -0x6848($gp)
    ctx->pc = 0x251a24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940600)));
    // 0x251a28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251a2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x251a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x251a30: 0xa78397b8  sh          $v1, -0x6848($gp)
    ctx->pc = 0x251a30u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940600), (uint16_t)GPR_U32(ctx, 3));
label_251a34:
    // 0x251a34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x251a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_251a38:
    // 0x251a38: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x251a38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251a3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x251a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x251a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251a44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251a44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251a48: 0x3e00008  jr          $ra
    ctx->pc = 0x251A48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251A48u;
            // 0x251a4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251A50u;
}
