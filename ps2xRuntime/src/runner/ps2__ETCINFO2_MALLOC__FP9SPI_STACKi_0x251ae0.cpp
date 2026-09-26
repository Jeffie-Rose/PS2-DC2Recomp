#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ETCINFO2_MALLOC__FP9SPI_STACKi
// Address: 0x251ae0 - 0x251b58
void ps2__ETCINFO2_MALLOC__FP9SPI_STACKi_0x251ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ETCINFO2_MALLOC__FP9SPI_STACKi_0x251ae0");
#endif

    switch (ctx->pc) {
        case 0x251afcu: goto label_251afc;
        case 0x251b28u: goto label_251b28;
        case 0x251b44u: goto label_251b44;
        default: break;
    }

    ctx->pc = 0x251ae0u;

    // 0x251ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x251ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x251ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x251ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x251aec: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x251AECu;
    {
        const bool branch_taken_0x251aec = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x251AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251AECu;
            // 0x251af0: 0x24100060  addiu       $s0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251aec) {
            ctx->pc = 0x251B00u;
            goto label_251b00;
        }
    }
    ctx->pc = 0x251AF4u;
    // 0x251af4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x251AF4u;
    SET_GPR_U32(ctx, 31, 0x251AFCu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251AFCu; }
        if (ctx->pc != 0x251AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251AFCu; }
        if (ctx->pc != 0x251AFCu) { return; }
    }
    ctx->pc = 0x251AFCu;
label_251afc:
    // 0x251afc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x251afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251b00:
    // 0x251b00: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x251b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x251b04: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x251b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x251b08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x251b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x251b0c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x251b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x251b10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251B10u;
    {
        const bool branch_taken_0x251b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B10u;
            // 0x251b14: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251b10) {
            ctx->pc = 0x251B20u;
            goto label_251b20;
        }
    }
    ctx->pc = 0x251B18u;
    // 0x251b18: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x251b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x251b1c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x251b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_251b20:
    // 0x251b20: 0xc04e748  jal         func_139D20
    ctx->pc = 0x251B20u;
    SET_GPR_U32(ctx, 31, 0x251B28u);
    ctx->pc = 0x251B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251B20u;
            // 0x251b24: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251B28u; }
        if (ctx->pc != 0x251B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251B28u; }
        if (ctx->pc != 0x251B28u) { return; }
    }
    ctx->pc = 0x251B28u;
label_251b28:
    // 0x251b28: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x251b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x251b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251b30: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x251b30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x251b34: 0xa470000c  sh          $s0, 0xC($v1)
    ctx->pc = 0x251b34u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 16));
    // 0x251b38: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x251b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x251b3c: 0xc08ab68  jal         func_22ADA0
    ctx->pc = 0x251B3Cu;
    SET_GPR_U32(ctx, 31, 0x251B44u);
    ctx->pc = 0x251B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x251B3Cu;
            // 0x251b40: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ADA0u;
    if (runtime->hasFunction(0x22ADA0u)) {
        auto targetFn = runtime->lookupFunction(0x22ADA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251B44u; }
        if (ctx->pc != 0x251B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EtcTbl2Clear__14CPosDataManageFii_0x22ada0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x251B44u; }
        if (ctx->pc != 0x251B44u) { return; }
    }
    ctx->pc = 0x251B44u;
label_251b44:
    // 0x251b44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x251b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x251b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x251b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x251b50: 0x3e00008  jr          $ra
    ctx->pc = 0x251B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x251B50u;
            // 0x251b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x251B58u;
}
