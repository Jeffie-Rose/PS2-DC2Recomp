#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: cfgFUNC_DATA__FP9SPI_STACKi
// Address: 0x164610 - 0x1646b4
void cfgFUNC_DATA__FP9SPI_STACKi_0x164610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cfgFUNC_DATA__FP9SPI_STACKi_0x164610");
#endif

    switch (ctx->pc) {
        case 0x16463cu: goto label_16463c;
        case 0x16464cu: goto label_16464c;
        case 0x164668u: goto label_164668;
        case 0x164698u: goto label_164698;
        default: break;
    }

    ctx->pc = 0x164610u;

    // 0x164610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x164610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x164614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x164614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x164618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16461c: 0x8f828950  lw          $v0, -0x76B0($gp)
    ctx->pc = 0x16461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936912)));
    // 0x164620: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164620u;
    {
        const bool branch_taken_0x164620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164620u;
            // 0x164624: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164620) {
            ctx->pc = 0x164644u;
            goto label_164644;
        }
    }
    ctx->pc = 0x164628u;
    // 0x164628: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16462c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x16462cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x164630: 0x8f868920  lw          $a2, -0x76E0($gp)
    ctx->pc = 0x164630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936864)));
    // 0x164634: 0xc0a7538  jal         func_29D4E0
    ctx->pc = 0x164634u;
    SET_GPR_U32(ctx, 31, 0x16463Cu);
    ctx->pc = 0x164638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164634u;
            // 0x164638: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D4E0u;
    if (runtime->hasFunction(0x29D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16463Cu; }
        if (ctx->pc != 0x16463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reserve__14CFuncPointMngrFiP9mgCMemory_0x29d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16463Cu; }
        if (ctx->pc != 0x16463Cu) { return; }
    }
    ctx->pc = 0x16463Cu;
label_16463c:
    // 0x16463c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16463cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164640: 0xaf828950  sw          $v0, -0x76B0($gp)
    ctx->pc = 0x164640u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936912), GPR_U32(ctx, 2));
label_164644:
    // 0x164644: 0xc05191c  jal         func_146470
    ctx->pc = 0x164644u;
    SET_GPR_U32(ctx, 31, 0x16464Cu);
    ctx->pc = 0x164648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164644u;
            // 0x164648: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146470u;
    if (runtime->hasFunction(0x146470u)) {
        auto targetFn = runtime->lookupFunction(0x146470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16464Cu; }
        if (ctx->pc != 0x16464Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        spiGetStackString__FP9SPI_STACK_0x146470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16464Cu; }
        if (ctx->pc != 0x16464Cu) { return; }
    }
    ctx->pc = 0x16464Cu;
label_16464c:
    // 0x16464c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16464Cu;
    {
        const bool branch_taken_0x16464c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16464Cu;
            // 0x164650: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16464c) {
            ctx->pc = 0x16465Cu;
            goto label_16465c;
        }
    }
    ctx->pc = 0x164654u;
    // 0x164654: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x164654u;
    {
        const bool branch_taken_0x164654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164654u;
            // 0x164658: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164654) {
            ctx->pc = 0x1646A4u;
            goto label_1646a4;
        }
    }
    ctx->pc = 0x16465Cu;
label_16465c:
    // 0x16465c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16465cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164660: 0xc04a38a  jal         func_128E28
    ctx->pc = 0x164660u;
    SET_GPR_U32(ctx, 31, 0x164668u);
    ctx->pc = 0x164664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164660u;
            // 0x164664: 0x24a530e8  addiu       $a1, $a1, 0x30E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164668u; }
        if (ctx->pc != 0x164668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164668u; }
        if (ctx->pc != 0x164668u) { return; }
    }
    ctx->pc = 0x164668u;
label_164668:
    // 0x164668: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x164668u;
    {
        const bool branch_taken_0x164668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16466Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164668u;
            // 0x16466c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164668) {
            ctx->pc = 0x164680u;
            goto label_164680;
        }
    }
    ctx->pc = 0x164670u;
    // 0x164670: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x164674: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x164674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x164678: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x164678u;
    {
        const bool branch_taken_0x164678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16467Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164678u;
            // 0x16467c: 0xac430cac  sw          $v1, 0xCAC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3244), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164678) {
            ctx->pc = 0x164688u;
            goto label_164688;
        }
    }
    ctx->pc = 0x164680u;
label_164680:
    // 0x164680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x164680u;
    {
        const bool branch_taken_0x164680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164680u;
            // 0x164684: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164680) {
            ctx->pc = 0x1646A8u;
            goto label_1646a8;
        }
    }
    ctx->pc = 0x164688u;
label_164688:
    // 0x164688: 0x8f828914  lw          $v0, -0x76EC($gp)
    ctx->pc = 0x164688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936852)));
    // 0x16468c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x16468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x164690: 0xc0a75a8  jal         func_29D6A0
    ctx->pc = 0x164690u;
    SET_GPR_U32(ctx, 31, 0x164698u);
    ctx->pc = 0x164694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164690u;
            // 0x164694: 0x24440cb0  addiu       $a0, $v0, 0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D6A0u;
    if (runtime->hasFunction(0x29D6A0u)) {
        auto targetFn = runtime->lookupFunction(0x29D6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164698u; }
        if (ctx->pc != 0x164698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFromReserve__14CFuncPointMngrFi_0x29d6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164698u; }
        if (ctx->pc != 0x164698u) { return; }
    }
    ctx->pc = 0x164698u;
label_164698:
    // 0x164698: 0xaf828940  sw          $v0, -0x76C0($gp)
    ctx->pc = 0x164698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936896), GPR_U32(ctx, 2));
    // 0x16469c: 0x8f828940  lw          $v0, -0x76C0($gp)
    ctx->pc = 0x16469cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936896)));
    // 0x1646a0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1646a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1646a4:
    // 0x1646a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1646a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1646a8:
    // 0x1646a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1646a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1646ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1646ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1646B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1646ACu;
            // 0x1646b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1646B4u;
}
