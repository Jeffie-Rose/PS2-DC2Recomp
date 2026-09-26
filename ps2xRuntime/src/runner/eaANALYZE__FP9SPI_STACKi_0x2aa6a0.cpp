#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: eaANALYZE__FP9SPI_STACKi
// Address: 0x2aa6a0 - 0x2aa770
void eaANALYZE__FP9SPI_STACKi_0x2aa6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("eaANALYZE__FP9SPI_STACKi_0x2aa6a0");
#endif

    switch (ctx->pc) {
        case 0x2aa6ccu: goto label_2aa6cc;
        case 0x2aa70cu: goto label_2aa70c;
        case 0x2aa720u: goto label_2aa720;
        case 0x2aa72cu: goto label_2aa72c;
        case 0x2aa750u: goto label_2aa750;
        default: break;
    }

    ctx->pc = 0x2aa6a0u;

    // 0x2aa6a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2aa6a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2aa6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2aa6a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aa6a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2aa6ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aa6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2aa6b0: 0x8f829a84  lw          $v0, -0x657C($gp)
    ctx->pc = 0x2aa6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
    // 0x2aa6b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA6B4u;
    {
        const bool branch_taken_0x2aa6b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6B4u;
            // 0x2aa6b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6b4) {
            ctx->pc = 0x2AA6C4u;
            goto label_2aa6c4;
        }
    }
    ctx->pc = 0x2AA6BCu;
    // 0x2aa6bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2AA6BCu;
    {
        const bool branch_taken_0x2aa6bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6BCu;
            // 0x2aa6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6bc) {
            ctx->pc = 0x2AA75Cu;
            goto label_2aa75c;
        }
    }
    ctx->pc = 0x2AA6C4u;
label_2aa6c4:
    // 0x2aa6c4: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA6C4u;
    SET_GPR_U32(ctx, 31, 0x2AA6CCu);
    ctx->pc = 0x2AA6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6C4u;
            // 0x2aa6c8: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA6CCu; }
        if (ctx->pc != 0x2AA6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA6CCu; }
        if (ctx->pc != 0x2AA6CCu) { return; }
    }
    ctx->pc = 0x2AA6CCu;
label_2aa6cc:
    // 0x2aa6cc: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA6CCu;
    {
        const bool branch_taken_0x2aa6cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2AA6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6CCu;
            // 0x2aa6d0: 0x28430010  slti        $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6cc) {
            ctx->pc = 0x2AA6DCu;
            goto label_2aa6dc;
        }
    }
    ctx->pc = 0x2AA6D4u;
    // 0x2aa6d4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA6D4u;
    {
        const bool branch_taken_0x2aa6d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa6d4) {
            ctx->pc = 0x2AA6E4u;
            goto label_2aa6e4;
        }
    }
    ctx->pc = 0x2AA6DCu;
label_2aa6dc:
    // 0x2aa6dc: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2AA6DCu;
    {
        const bool branch_taken_0x2aa6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA6DCu;
            // 0x2aa6e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6dc) {
            ctx->pc = 0x2AA75Cu;
            goto label_2aa75c;
        }
    }
    ctx->pc = 0x2AA6E4u;
label_2aa6e4:
    // 0x2aa6e4: 0x8f839a84  lw          $v1, -0x657C($gp)
    ctx->pc = 0x2aa6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941316)));
    // 0x2aa6e8: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x2aa6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x2aa6ec: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2aa6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2aa6f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2aa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2aa6f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa6f8: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2aa6f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2aa6fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2aa6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2aa700: 0x24420180  addiu       $v0, $v0, 0x180
    ctx->pc = 0x2aa700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x2aa704: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA704u;
    SET_GPR_U32(ctx, 31, 0x2AA70Cu);
    ctx->pc = 0x2AA708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA704u;
            // 0x2aa708: 0xaf829a88  sw          $v0, -0x6578($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA70Cu; }
        if (ctx->pc != 0x2AA70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA70Cu; }
        if (ctx->pc != 0x2AA70Cu) { return; }
    }
    ctx->pc = 0x2AA70Cu;
label_2aa70c:
    // 0x2aa70c: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa710: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2aa710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa714: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x2aa714u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2aa718: 0xc05191c  jal         func_146470
    ctx->pc = 0x2AA718u;
    SET_GPR_U32(ctx, 31, 0x2AA720u);
    ctx->pc = 0x2AA71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA718u;
            // 0x2aa71c: 0xac620010  sw          $v0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA720u; }
        if (ctx->pc != 0x2AA720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA720u; }
        if (ctx->pc != 0x2AA720u) { return; }
    }
    ctx->pc = 0x2AA720u;
label_2aa720:
    // 0x2aa720: 0x8f859a8c  lw          $a1, -0x6574($gp)
    ctx->pc = 0x2aa720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941324)));
    // 0x2aa724: 0xc04e7a0  jal         func_139E80
    ctx->pc = 0x2AA724u;
    SET_GPR_U32(ctx, 31, 0x2AA72Cu);
    ctx->pc = 0x2AA728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA724u;
            // 0x2aa728: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E80u;
    if (runtime->hasFunction(0x139E80u)) {
        auto targetFn = runtime->lookupFunction(0x139E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA72Cu; }
        if (ctx->pc != 0x2AA72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCopyString__FPcP9mgCMemory_0x139e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA72Cu; }
        if (ctx->pc != 0x2AA72Cu) { return; }
    }
    ctx->pc = 0x2AA72Cu;
label_2aa72c:
    // 0x2aa72c: 0x8f859a88  lw          $a1, -0x6578($gp)
    ctx->pc = 0x2aa72cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa730: 0x2a030004  slti        $v1, $s0, 0x4
    ctx->pc = 0x2aa730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2aa734: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2aa734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aa738: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2aa738u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x2aa73c: 0x8f829a88  lw          $v0, -0x6578($gp)
    ctx->pc = 0x2aa73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa740: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AA740u;
    {
        const bool branch_taken_0x2aa740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA740u;
            // 0x2aa744: 0xa0440008  sb          $a0, 0x8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 8), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa740) {
            ctx->pc = 0x2AA758u;
            goto label_2aa758;
        }
    }
    ctx->pc = 0x2AA748u;
    // 0x2aa748: 0xc0518f8  jal         func_1463E0
    ctx->pc = 0x2AA748u;
    SET_GPR_U32(ctx, 31, 0x2AA750u);
    ctx->pc = 0x2AA74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA748u;
            // 0x2aa74c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1463E0u;
    if (runtime->hasFunction(0x1463E0u)) {
        auto targetFn = runtime->lookupFunction(0x1463E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA750u; }
        if (ctx->pc != 0x2AA750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackInt__FP9SPI_STACK_0x1463e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AA750u; }
        if (ctx->pc != 0x2AA750u) { return; }
    }
    ctx->pc = 0x2AA750u;
label_2aa750:
    // 0x2aa750: 0x8f839a88  lw          $v1, -0x6578($gp)
    ctx->pc = 0x2aa750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941320)));
    // 0x2aa754: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2aa754u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
label_2aa758:
    // 0x2aa758: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa75c:
    // 0x2aa75c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2aa75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa760: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aa760u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa764: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aa764u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa768: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AA768u;
            // 0x2aa76c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AA770u;
}
