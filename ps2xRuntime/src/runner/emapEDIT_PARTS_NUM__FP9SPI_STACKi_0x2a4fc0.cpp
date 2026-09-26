#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: emapEDIT_PARTS_NUM__FP9SPI_STACKi
// Address: 0x2a4fc0 - 0x2a5064
void emapEDIT_PARTS_NUM__FP9SPI_STACKi_0x2a4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("emapEDIT_PARTS_NUM__FP9SPI_STACKi_0x2a4fc0");
#endif

    switch (ctx->pc) {
        case 0x2a4fd0u: goto label_2a4fd0;
        case 0x2a500cu: goto label_2a500c;
        case 0x2a5024u: goto label_2a5024;
        case 0x2a5040u: goto label_2a5040;
        case 0x2a5050u: goto label_2a5050;
        default: break;
    }

    ctx->pc = 0x2a4fc0u;

    // 0x2a4fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a4fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a4fc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a4fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2a4fc8: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2A4FC8u;
    SET_GPR_U32(ctx, 31, 0x2A4FD0u);
    ctx->pc = 0x2A4FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FC8u;
            // 0x2a4fcc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4FD0u; }
        if (ctx->pc != 0x2A4FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4FD0u; }
        if (ctx->pc != 0x2A4FD0u) { return; }
    }
    ctx->pc = 0x2A4FD0u;
label_2a4fd0:
    // 0x2a4fd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4fd4: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4FD4u;
    {
        const bool branch_taken_0x2a4fd4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2A4FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FD4u;
            // 0x2a4fd8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fd4) {
            ctx->pc = 0x2A4FE4u;
            goto label_2a4fe4;
        }
    }
    ctx->pc = 0x2A4FDCu;
    // 0x2a4fdc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2A4FDCu;
    {
        const bool branch_taken_0x2a4fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FDCu;
            // 0x2a4fe0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4fdc) {
            ctx->pc = 0x2A5054u;
            goto label_2a5054;
        }
    }
    ctx->pc = 0x2A4FE4u;
label_2a4fe4:
    // 0x2a4fe4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2a4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a4fe8: 0x219c0  sll         $v1, $v0, 7
    ctx->pc = 0x2a4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2a4fec: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2a4fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2a4ff0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A4FF0u;
    {
        const bool branch_taken_0x2a4ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4FF0u;
            // 0x2a4ff4: 0x31102  srl         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4ff0) {
            ctx->pc = 0x2A5000u;
            goto label_2a5000;
        }
    }
    ctx->pc = 0x2A4FF8u;
    // 0x2a4ff8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2a4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2a4ffc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a5000:
    // 0x2a5000: 0x8f849a58  lw          $a0, -0x65A8($gp)
    ctx->pc = 0x2a5000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941272)));
    // 0x2a5004: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2A5004u;
    SET_GPR_U32(ctx, 31, 0x2A500Cu);
    ctx->pc = 0x2A5008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5004u;
            // 0x2a5008: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A500Cu; }
        if (ctx->pc != 0x2A500Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A500Cu; }
        if (ctx->pc != 0x2A500Cu) { return; }
    }
    ctx->pc = 0x2A500Cu;
label_2a500c:
    // 0x2a500c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2a500cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2a5010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5014: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x2a5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2a5018: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x2a5018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x2a501c: 0xc04e63c  jal         func_1398F0
    ctx->pc = 0x2A501Cu;
    SET_GPR_U32(ctx, 31, 0x2A5024u);
    ctx->pc = 0x2A5020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A501Cu;
            // 0x2a5020: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5024u; }
        if (ctx->pc != 0x2A5024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5024u; }
        if (ctx->pc != 0x2A5024u) { return; }
    }
    ctx->pc = 0x2A5024u;
label_2a5024:
    // 0x2a5024: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x2a5024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
    // 0x2a5028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a5028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a502c: 0x24a55360  addiu       $a1, $a1, 0x5360
    ctx->pc = 0x2a502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21344));
    // 0x2a5030: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a5030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5034: 0x24070280  addiu       $a3, $zero, 0x280
    ctx->pc = 0x2a5034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x2a5038: 0xc0400bc  jal         func_1002F0
    ctx->pc = 0x2A5038u;
    SET_GPR_U32(ctx, 31, 0x2A5040u);
    ctx->pc = 0x2A503Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5038u;
            // 0x2a503c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5040u; }
        if (ctx->pc != 0x2A5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5040u; }
        if (ctx->pc != 0x2A5040u) { return; }
    }
    ctx->pc = 0x2A5040u;
label_2a5040:
    // 0x2a5040: 0x8f849a54  lw          $a0, -0x65AC($gp)
    ctx->pc = 0x2a5040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941268)));
    // 0x2a5044: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a5044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a5048: 0xc0a9378  jal         func_2A4DE0
    ctx->pc = 0x2A5048u;
    SET_GPR_U32(ctx, 31, 0x2A5050u);
    ctx->pc = 0x2A504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A5048u;
            // 0x2a504c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DE0u;
    if (runtime->hasFunction(0x2A4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x2A4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5050u; }
        if (ctx->pc != 0x2A5050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetePartsInfoTable__13CEditInfoMngrFP14CEditPartsInfoi_0x2a4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A5050u; }
        if (ctx->pc != 0x2A5050u) { return; }
    }
    ctx->pc = 0x2A5050u;
label_2a5050:
    // 0x2a5050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2a5050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a5054:
    // 0x2a5054: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a5054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a5058: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a5058u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a505c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A505Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A5060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A505Cu;
            // 0x2a5060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A5064u;
}
