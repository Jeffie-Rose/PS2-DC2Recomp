#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _MENU_FORM_PARTNUM__FP9SPI_STACKi
// Address: 0x252240 - 0x2522f8
void ps2__MENU_FORM_PARTNUM__FP9SPI_STACKi_0x252240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__MENU_FORM_PARTNUM__FP9SPI_STACKi_0x252240");
#endif

    switch (ctx->pc) {
        case 0x25226cu: goto label_25226c;
        case 0x2522a4u: goto label_2522a4;
        case 0x2522b8u: goto label_2522b8;
        case 0x2522c4u: goto label_2522c4;
        default: break;
    }

    ctx->pc = 0x252240u;

    // 0x252240: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252244: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x252244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x252248: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25224c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x252250: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252254: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x252254u;
    {
        const bool branch_taken_0x252254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252254u;
            // 0x252258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252254) {
            ctx->pc = 0x252264u;
            goto label_252264;
        }
    }
    ctx->pc = 0x25225Cu;
    // 0x25225c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x25225Cu;
    {
        const bool branch_taken_0x25225c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25225Cu;
            // 0x252260: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25225c) {
            ctx->pc = 0x2522E8u;
            goto label_2522e8;
        }
    }
    ctx->pc = 0x252264u;
label_252264:
    // 0x252264: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x252264u;
    SET_GPR_U32(ctx, 31, 0x25226Cu);
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25226Cu; }
        if (ctx->pc != 0x25226Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25226Cu; }
        if (ctx->pc != 0x25226Cu) { return; }
    }
    ctx->pc = 0x25226Cu;
label_25226c:
    // 0x25226c: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x25226cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252270: 0xa4620068  sh          $v0, 0x68($v1)
    ctx->pc = 0x252270u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 104), (uint16_t)GPR_U32(ctx, 2));
    // 0x252274: 0x8f8297bc  lw          $v0, -0x6844($gp)
    ctx->pc = 0x252274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x252278: 0x84430068  lh          $v1, 0x68($v0)
    ctx->pc = 0x252278u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x25227c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x25227cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x252280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x252280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x252284: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x252284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x252288: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x252288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x25228c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25228Cu;
    {
        const bool branch_taken_0x25228c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25228Cu;
            // 0x252290: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25228c) {
            ctx->pc = 0x25229Cu;
            goto label_25229c;
        }
    }
    ctx->pc = 0x252294u;
    // 0x252294: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x252294u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x252298: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x252298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25229c:
    // 0x25229c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x25229Cu;
    SET_GPR_U32(ctx, 31, 0x2522A4u);
    ctx->pc = 0x2522A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25229Cu;
            // 0x2522a0: 0x8f8497b0  lw          $a0, -0x6850($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940592)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522A4u; }
        if (ctx->pc != 0x2522A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522A4u; }
        if (ctx->pc != 0x2522A4u) { return; }
    }
    ctx->pc = 0x2522A4u;
label_2522a4:
    // 0x2522a4: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2522a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2522a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2522a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2522acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2522b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2522B0u;
    {
        const bool branch_taken_0x2522b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2522B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2522B0u;
            // 0x2522b4: 0xac62006c  sw          $v0, 0x6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522b0) {
            ctx->pc = 0x2522CCu;
            goto label_2522cc;
        }
    }
    ctx->pc = 0x2522B8u;
label_2522b8:
    // 0x2522b8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x2522b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
    // 0x2522bc: 0xc089600  jal         func_225800
    ctx->pc = 0x2522BCu;
    SET_GPR_U32(ctx, 31, 0x2522C4u);
    ctx->pc = 0x2522C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2522BCu;
            // 0x2522c0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225800u;
    if (runtime->hasFunction(0x225800u)) {
        auto targetFn = runtime->lookupFunction(0x225800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522C4u; }
        if (ctx->pc != 0x2522C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosDataTypeInit__FP18MENUFORMPARTS_TYPE_0x225800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2522C4u; }
        if (ctx->pc != 0x2522C4u) { return; }
    }
    ctx->pc = 0x2522C4u;
label_2522c4:
    // 0x2522c4: 0x26310048  addiu       $s1, $s1, 0x48
    ctx->pc = 0x2522c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 72));
    // 0x2522c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2522c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2522cc:
    // 0x2522cc: 0x0  nop
    ctx->pc = 0x2522ccu;
    // NOP
    // 0x2522d0: 0x8f8397bc  lw          $v1, -0x6844($gp)
    ctx->pc = 0x2522d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940604)));
    // 0x2522d4: 0x84620068  lh          $v0, 0x68($v1)
    ctx->pc = 0x2522d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x2522d8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2522d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2522dc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2522DCu;
    {
        const bool branch_taken_0x2522dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2522E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2522DCu;
            // 0x2522e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2522dc) {
            ctx->pc = 0x2522B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2522b8;
        }
    }
    ctx->pc = 0x2522E4u;
    // 0x2522e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2522e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2522e8:
    // 0x2522e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2522e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2522ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2522ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2522f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2522F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2522F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2522F0u;
            // 0x2522f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2522F8u;
}
