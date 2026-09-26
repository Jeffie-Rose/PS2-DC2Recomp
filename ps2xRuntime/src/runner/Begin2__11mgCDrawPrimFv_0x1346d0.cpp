#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Begin2__11mgCDrawPrimFv
// Address: 0x1346d0 - 0x134854
void Begin2__11mgCDrawPrimFv_0x1346d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Begin2__11mgCDrawPrimFv_0x1346d0");
#endif

    switch (ctx->pc) {
        case 0x13472cu: goto label_13472c;
        case 0x13474cu: goto label_13474c;
        case 0x1347a4u: goto label_1347a4;
        case 0x134834u: goto label_134834;
        default: break;
    }

    ctx->pc = 0x1346d0u;

    // 0x1346d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1346d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1346d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1346d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1346d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1346d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1346dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1346dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1346e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1346e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1346e4: 0xac8500d0  sw          $a1, 0xD0($a0)
    ctx->pc = 0x1346e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 5));
    // 0x1346e8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1346e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1346ec: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x1346ECu;
    {
        const bool branch_taken_0x1346ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1346F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1346ECu;
            // 0x1346f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346ec) {
            ctx->pc = 0x134840u;
            goto label_134840;
        }
    }
    ctx->pc = 0x1346F4u;
    // 0x1346f4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1346f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1346f8: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1346F8u;
    {
        const bool branch_taken_0x1346f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1346f8) {
            ctx->pc = 0x134840u;
            goto label_134840;
        }
    }
    ctx->pc = 0x134700u;
    // 0x134700: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x134700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134704: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134704u;
    {
        const bool branch_taken_0x134704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x134704) {
            ctx->pc = 0x134714u;
            goto label_134714;
        }
    }
    ctx->pc = 0x13470Cu;
    // 0x13470c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x13470Cu;
    {
        const bool branch_taken_0x13470c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13470Cu;
            // 0x134710: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13470c) {
            ctx->pc = 0x134844u;
            goto label_134844;
        }
    }
    ctx->pc = 0x134714u;
label_134714:
    // 0x134714: 0x8c700064  lw          $s0, 0x64($v1)
    ctx->pc = 0x134714u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x134718: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x134718u;
    {
        const bool branch_taken_0x134718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x134718) {
            ctx->pc = 0x134840u;
            goto label_134840;
        }
    }
    ctx->pc = 0x134720u;
    // 0x134720: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x134720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x134724: 0xc04e714  jal         func_139C50
    ctx->pc = 0x134724u;
    SET_GPR_U32(ctx, 31, 0x13472Cu);
    ctx->pc = 0x134728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134724u;
            // 0x134728: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13472Cu; }
        if (ctx->pc != 0x13472Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13472Cu; }
        if (ctx->pc != 0x13472Cu) { return; }
    }
    ctx->pc = 0x13472Cu;
label_13472c:
    // 0x13472c: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x13472cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x134730: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x134730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x134734: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134734u;
    {
        const bool branch_taken_0x134734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134734) {
            ctx->pc = 0x13474Cu;
            goto label_13474c;
        }
    }
    ctx->pc = 0x13473Cu;
    // 0x13473c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x13473cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x134740: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x134740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x134744: 0xc041afa  jal         func_106BE8
    ctx->pc = 0x134744u;
    SET_GPR_U32(ctx, 31, 0x13474Cu);
    ctx->pc = 0x134748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134744u;
            // 0x134748: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106BE8u;
    if (runtime->hasFunction(0x106BE8u)) {
        auto targetFn = runtime->lookupFunction(0x106BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13474Cu; }
        if (ctx->pc != 0x13474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVif1PkCall_0x106be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13474Cu; }
        if (ctx->pc != 0x13474Cu) { return; }
    }
    ctx->pc = 0x13474Cu;
label_13474c:
    // 0x13474c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x13474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x134750: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x134750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x134754: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x134754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x134758: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x134758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
    // 0x13475c: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x13475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x134760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x134760u;
    {
        const bool branch_taken_0x134760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134760) {
            ctx->pc = 0x134770u;
            goto label_134770;
        }
    }
    ctx->pc = 0x134768u;
    // 0x134768: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x134768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x13476c: 0xae2200d8  sw          $v0, 0xD8($s1)
    ctx->pc = 0x13476cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 2));
label_134770:
    // 0x134770: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x134770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x134774: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x134774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x134778: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x134778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x13477c: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x13477cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x134780: 0xde020f40  ld          $v0, 0xF40($s0)
    ctx->pc = 0x134780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 3904)));
    // 0x134784: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x134784u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x134788: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x134788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13478c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x13478cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x134790: 0xdfa20038  ld          $v0, 0x38($sp)
    ctx->pc = 0x134790u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x134794: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x134794u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
    // 0x134798: 0x8e2500cc  lw          $a1, 0xCC($s1)
    ctx->pc = 0x134798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x13479c: 0xc04e290  jal         func_138A40
    ctx->pc = 0x13479Cu;
    SET_GPR_U32(ctx, 31, 0x1347A4u);
    ctx->pc = 0x1347A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13479Cu;
            // 0x1347a0: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347A4u; }
        if (ctx->pc != 0x1347A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1347A4u; }
        if (ctx->pc != 0x1347A4u) { return; }
    }
    ctx->pc = 0x1347A4u;
label_1347a4:
    // 0x1347a4: 0x8e2b00dc  lw          $t3, 0xDC($s1)
    ctx->pc = 0x1347a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1347a8: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x1347a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x1347ac: 0x352a0007  ori         $t2, $t1, 0x7
    ctx->pc = 0x1347acu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)7);
    // 0x1347b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x1347b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x1347b4: 0x34480007  ori         $t0, $v0, 0x7
    ctx->pc = 0x1347b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x1347b8: 0x34078002  ori         $a3, $zero, 0x8002
    ctx->pc = 0x1347b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1347bc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1347bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1347c0: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1347c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1347c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1347c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1347c8: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x1347c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x1347cc: 0xad6a0000  sw          $t2, 0x0($t3)
    ctx->pc = 0x1347ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 10));
    // 0x1347d0: 0xad600008  sw          $zero, 0x8($t3)
    ctx->pc = 0x1347d0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    // 0x1347d4: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x1347d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x1347d8: 0xad68000c  sw          $t0, 0xC($t3)
    ctx->pc = 0x1347d8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 8));
    // 0x1347dc: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x1347dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1347e0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x1347e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x1347e4: 0xae2800dc  sw          $t0, 0xDC($s1)
    ctx->pc = 0x1347e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 8));
    // 0x1347e8: 0x8e2800dc  lw          $t0, 0xDC($s1)
    ctx->pc = 0x1347e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x1347ec: 0xae2800e8  sw          $t0, 0xE8($s1)
    ctx->pc = 0x1347ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 8));
    // 0x1347f0: 0xad070000  sw          $a3, 0x0($t0)
    ctx->pc = 0x1347f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 7));
    // 0x1347f4: 0xad090004  sw          $t1, 0x4($t0)
    ctx->pc = 0x1347f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 9));
    // 0x1347f8: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x1347f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x1347fc: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x1347fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x134800: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x134800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x134804: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x134804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x134808: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x134808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x13480c: 0x8e2700dc  lw          $a3, 0xDC($s1)
    ctx->pc = 0x13480cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x134810: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x134810u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x134814: 0x24e20020  addiu       $v0, $a3, 0x20
    ctx->pc = 0x134814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x134818: 0xfce60008  sd          $a2, 0x8($a3)
    ctx->pc = 0x134818u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 6));
    // 0x13481c: 0xfce40010  sd          $a0, 0x10($a3)
    ctx->pc = 0x13481cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 4));
    // 0x134820: 0xfce30018  sd          $v1, 0x18($a3)
    ctx->pc = 0x134820u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 3));
    // 0x134824: 0xae2200dc  sw          $v0, 0xDC($s1)
    ctx->pc = 0x134824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 2));
    // 0x134828: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x134828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x13482c: 0xc04e220  jal         func_138880
    ctx->pc = 0x13482Cu;
    SET_GPR_U32(ctx, 31, 0x134834u);
    ctx->pc = 0x134830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13482Cu;
            // 0x134830: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138880u;
    if (runtime->hasFunction(0x138880u)) {
        auto targetFn = runtime->lookupFunction(0x138880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134834u; }
        if (ctx->pc != 0x134834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__10mgCDrawEnvFR10mgCDrawEnv_0x138880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134834u; }
        if (ctx->pc != 0x134834u) { return; }
    }
    ctx->pc = 0x134834u;
label_134834:
    // 0x134834: 0x8e2300dc  lw          $v1, 0xDC($s1)
    ctx->pc = 0x134834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x134838: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x134838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x13483c: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x13483cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_134840:
    // 0x134840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_134844:
    // 0x134844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134848: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134848u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13484c: 0x3e00008  jr          $ra
    ctx->pc = 0x13484Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13484Cu;
            // 0x134850: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134854u;
}
