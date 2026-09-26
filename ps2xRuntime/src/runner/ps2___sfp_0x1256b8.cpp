#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __sfp
// Address: 0x1256b8 - 0x125798
void ps2___sfp_0x1256b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___sfp_0x1256b8");
#endif

    switch (ctx->pc) {
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x125700u: goto label_125700;
        case 0x12572cu: goto label_12572c;
        default: break;
    }

    ctx->pc = 0x1256b8u;

    // 0x1256b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1256b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1256bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1256bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1256c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1256c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1256c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1256c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1256c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1256c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1256cc: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1256ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1256d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1256D0u;
    {
        const bool branch_taken_0x1256d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1256D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256D0u;
            // 0x1256d4: 0x263001d8  addiu       $s0, $s1, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256d0) {
            ctx->pc = 0x1256F0u;
            goto label_1256f0;
        }
    }
    ctx->pc = 0x1256D8u;
    // 0x1256d8: 0xc0495ee  jal         func_1257B8
    ctx->pc = 0x1256D8u;
    SET_GPR_U32(ctx, 31, 0x1256E0u);
    ctx->pc = 0x1257B8u;
    if (runtime->hasFunction(0x1257B8u)) {
        auto targetFn = runtime->lookupFunction(0x1257B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256E0u; }
        if (ctx->pc != 0x1256E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sinit_0x1257b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256E0u; }
        if (ctx->pc != 0x1256E0u) { return; }
    }
    ctx->pc = 0x1256E0u;
label_1256e0:
    // 0x1256e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1256E0u;
    {
        const bool branch_taken_0x1256e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256E0u;
            // 0x1256e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256e0) {
            ctx->pc = 0x1256F4u;
            goto label_1256f4;
        }
    }
    ctx->pc = 0x1256E8u;
label_1256e8:
    // 0x1256e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1256e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1256ec:
    // 0x1256ec: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x1256ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1256f0:
    // 0x1256f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1256f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1256f4:
    // 0x1256f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1256f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1256f8: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1256F8u;
    {
        const bool branch_taken_0x1256f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1256FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256F8u;
            // 0x1256fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256f8) {
            ctx->pc = 0x125714u;
            goto label_125714;
        }
    }
    ctx->pc = 0x125700u;
label_125700:
    // 0x125700: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x125700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x125704: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x125704u;
    {
        const bool branch_taken_0x125704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x125708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125704u;
            // 0x125708: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125704) {
            ctx->pc = 0x125744u;
            goto label_125744;
        }
    }
    ctx->pc = 0x12570Cu;
    // 0x12570c: 0x461fffc  bgez        $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x12570Cu;
    {
        const bool branch_taken_0x12570c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x125710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12570Cu;
            // 0x125710: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12570c) {
            ctx->pc = 0x125700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125700;
        }
    }
    ctx->pc = 0x125714u;
label_125714:
    // 0x125714: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x125714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x125718: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x125718u;
    {
        const bool branch_taken_0x125718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125718u;
            // 0x12571c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125718) {
            ctx->pc = 0x1256ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1256ec;
        }
    }
    ctx->pc = 0x125720u;
    // 0x125720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125724: 0xc049592  jal         func_125648
    ctx->pc = 0x125724u;
    SET_GPR_U32(ctx, 31, 0x12572Cu);
    ctx->pc = 0x125728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125724u;
            // 0x125728: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125648u;
    if (runtime->hasFunction(0x125648u)) {
        auto targetFn = runtime->lookupFunction(0x125648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12572Cu; }
        if (ctx->pc != 0x12572Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___sfmoreglue_0x125648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12572Cu; }
        if (ctx->pc != 0x12572Cu) { return; }
    }
    ctx->pc = 0x12572Cu;
label_12572c:
    // 0x12572c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x12572Cu;
    {
        const bool branch_taken_0x12572c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12572Cu;
            // 0x125730: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12572c) {
            ctx->pc = 0x1256E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1256e8;
        }
    }
    ctx->pc = 0x125734u;
    // 0x125734: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x125734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x125738: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125738u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12573c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x12573Cu;
    {
        const bool branch_taken_0x12573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12573Cu;
            // 0x125740: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12573c) {
            ctx->pc = 0x125784u;
            goto label_125784;
        }
    }
    ctx->pc = 0x125744u;
label_125744:
    // 0x125744: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x125744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x125748: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x125748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12574c: 0xa482000c  sh          $v0, 0xC($a0)
    ctx->pc = 0x12574cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x125750: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x125750u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x125754: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x125754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125758: 0xac910054  sw          $s1, 0x54($a0)
    ctx->pc = 0x125758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 17));
    // 0x12575c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12575cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x125760: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x125760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x125764: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x125764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x125768: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x125768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12576c: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12576cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x125770: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x125770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x125774: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x125774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x125778: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x125778u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x12577c: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x12577cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x125780: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x125780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_125784:
    // 0x125784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x125784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125788: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x125788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12578c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12578cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125790: 0x3e00008  jr          $ra
    ctx->pc = 0x125790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125790u;
            // 0x125794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125798u;
}
