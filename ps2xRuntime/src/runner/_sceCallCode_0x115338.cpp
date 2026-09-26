#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _sceCallCode
// Address: 0x115338 - 0x1154dc
void _sceCallCode_0x115338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCallCode_0x115338");
#endif

    switch (ctx->pc) {
        case 0x115378u: goto label_115378;
        case 0x115390u: goto label_115390;
        case 0x1153b8u: goto label_1153b8;
        case 0x11541cu: goto label_11541c;
        case 0x115458u: goto label_115458;
        case 0x115468u: goto label_115468;
        case 0x115470u: goto label_115470;
        case 0x115484u: goto label_115484;
        case 0x115494u: goto label_115494;
        case 0x1154a4u: goto label_1154a4;
        case 0x1154acu: goto label_1154ac;
        default: break;
    }

    ctx->pc = 0x115338u;

    // 0x115338: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x115338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x11533c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x11533cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x115340: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x115340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x115344: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x115344u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x115348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11534c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x11534cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x115350: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x115350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x115354: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x115354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115358: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x115358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x11535c: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x11535cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
    // 0x115360: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x115360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x115364: 0x26f2b5c0  addiu       $s2, $s7, -0x4A40
    ctx->pc = 0x115364u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948288));
    // 0x115368: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x115368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x11536c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x11536cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x115370: 0xc044fc2  jal         func_113F08
    ctx->pc = 0x115370u;
    SET_GPR_U32(ctx, 31, 0x115378u);
    ctx->pc = 0x115374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115370u;
            // 0x115374: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113F08u;
    if (runtime->hasFunction(0x113F08u)) {
        auto targetFn = runtime->lookupFunction(0x113F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115378u; }
        if (ctx->pc != 0x115378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsWaitS_0x113f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115378u; }
        if (ctx->pc != 0x115378u) { return; }
    }
    ctx->pc = 0x115378u;
label_115378:
    // 0x115378: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x115378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11537c: 0x8c430f20  lw          $v1, 0xF20($v0)
    ctx->pc = 0x11537cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3872)));
    // 0x115380: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x115380u;
    {
        const bool branch_taken_0x115380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x115380) {
            ctx->pc = 0x115384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x115380u;
            // 0x115384: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x115394u;
            goto label_115394;
        }
    }
    ctx->pc = 0x115388u;
    // 0x115388: 0xc045002  jal         func_114008
    ctx->pc = 0x115388u;
    SET_GPR_U32(ctx, 31, 0x115390u);
    ctx->pc = 0x114008u;
    if (runtime->hasFunction(0x114008u)) {
        auto targetFn = runtime->lookupFunction(0x114008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115390u; }
        if (ctx->pc != 0x115390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceFsInit_0x114008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115390u; }
        if (ctx->pc != 0x115390u) { return; }
    }
    ctx->pc = 0x115390u;
label_115390:
    // 0x115390: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x115390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_115394:
    // 0x115394: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x115394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115398: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x115398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x11539c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11539Cu;
    {
        const bool branch_taken_0x11539c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11539Cu;
            // 0x1153a0: 0xa242000c  sb          $v0, 0xC($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11539c) {
            ctx->pc = 0x1153E4u;
            goto label_1153e4;
        }
    }
    ctx->pc = 0x1153A4u;
    // 0x1153a4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1153a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1153a8: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1153a8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1153ac: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1153acu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x1153b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1153b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1153b4: 0x0  nop
    ctx->pc = 0x1153b4u;
    // NOP
label_1153b8:
    // 0x1153b8: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x1153b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x1153bc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1153BCu;
    {
        const bool branch_taken_0x1153bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153BCu;
            // 0x1153c0: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153bc) {
            ctx->pc = 0x1153F0u;
            goto label_1153f0;
        }
    }
    ctx->pc = 0x1153C4u;
    // 0x1153c4: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x1153c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1153c8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1153c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1153cc: 0xa083000c  sb          $v1, 0xC($a0)
    ctx->pc = 0x1153ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1153d0: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x1153d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x1153d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1153D4u;
    {
        const bool branch_taken_0x1153d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1153d4) {
            ctx->pc = 0x1153D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1153D4u;
            // 0x1153d8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1153B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1153b8;
        }
    }
    ctx->pc = 0x1153DCu;
    // 0x1153dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1153DCu;
    {
        const bool branch_taken_0x1153dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1153E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153DCu;
            // 0x1153e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153dc) {
            ctx->pc = 0x1153F4u;
            goto label_1153f4;
        }
    }
    ctx->pc = 0x1153E4u;
label_1153e4:
    // 0x1153e4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1153e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1153e8: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1153e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
    // 0x1153ec: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x1153ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
label_1153f0:
    // 0x1153f0: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1153f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_1153f4:
    // 0x1153f4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1153F4u;
    {
        const bool branch_taken_0x1153f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1153F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1153F4u;
            // 0x1153f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1153f4) {
            ctx->pc = 0x115404u;
            goto label_115404;
        }
    }
    ctx->pc = 0x1153FCu;
    // 0x1153fc: 0xa240040b  sb          $zero, 0x40B($s2)
    ctx->pc = 0x1153fcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1035), (uint8_t)GPR_U32(ctx, 0));
    // 0x115400: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x115400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
label_115404:
    // 0x115404: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x115404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x115408: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x115408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11540c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11540cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x115410: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x115410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x115414: 0xc044038  jal         func_1100E0
    ctx->pc = 0x115414u;
    SET_GPR_U32(ctx, 31, 0x11541Cu);
    ctx->pc = 0x115418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115414u;
            // 0x115418: 0x2694c200  addiu       $s4, $s4, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100E0u;
    if (runtime->hasFunction(0x1100E0u)) {
        auto targetFn = runtime->lookupFunction(0x1100E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11541Cu; }
        if (ctx->pc != 0x11541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateSema_0x1100e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11541Cu; }
        if (ctx->pc != 0x11541Cu) { return; }
    }
    ctx->pc = 0x11541Cu;
label_11541c:
    // 0x11541c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11541cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115420: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x115420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x115424: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x115424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115428: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x115428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x11542c: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x11542cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x115430: 0x26a4c880  addiu       $a0, $s5, -0x3780
    ctx->pc = 0x115430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294953088));
    // 0x115434: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x115434u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115438: 0x26e7b5c0  addiu       $a3, $s7, -0x4A40
    ctx->pc = 0x115438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948288));
    // 0x11543c: 0x2608000d  addiu       $t0, $s0, 0xD
    ctx->pc = 0x11543cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x115440: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x115440u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115444: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x115444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x115448: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x115448u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11544c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x11544cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x115450: 0xc044ca0  jal         func_113280
    ctx->pc = 0x115450u;
    SET_GPR_U32(ctx, 31, 0x115458u);
    ctx->pc = 0x115454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115450u;
            // 0x115454: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113280u;
    if (runtime->hasFunction(0x113280u)) {
        auto targetFn = runtime->lookupFunction(0x113280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115458u; }
        if (ctx->pc != 0x115458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSifCallRpc_0x113280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115458u; }
        if (ctx->pc != 0x115458u) { return; }
    }
    ctx->pc = 0x115458u;
label_115458:
    // 0x115458: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x115458u;
    {
        const bool branch_taken_0x115458 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11545Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115458u;
            // 0x11545c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115458) {
            ctx->pc = 0x115478u;
            goto label_115478;
        }
    }
    ctx->pc = 0x115460u;
    // 0x115460: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x115460u;
    SET_GPR_U32(ctx, 31, 0x115468u);
    ctx->pc = 0x115464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x115460u;
            // 0x115464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115468u; }
        if (ctx->pc != 0x115468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115468u; }
        if (ctx->pc != 0x115468u) { return; }
    }
    ctx->pc = 0x115468u;
label_115468:
    // 0x115468: 0xc044fce  jal         func_113F38
    ctx->pc = 0x115468u;
    SET_GPR_U32(ctx, 31, 0x115470u);
    ctx->pc = 0x113F38u;
    if (runtime->hasFunction(0x113F38u)) {
        auto targetFn = runtime->lookupFunction(0x113F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115470u; }
        if (ctx->pc != 0x115470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsSigSema_0x113f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115470u; }
        if (ctx->pc != 0x115470u) { return; }
    }
    ctx->pc = 0x115470u;
label_115470:
    // 0x115470: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x115470u;
    {
        const bool branch_taken_0x115470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115470u;
            // 0x115474: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115470) {
            ctx->pc = 0x1154B0u;
            goto label_1154b0;
        }
    }
    ctx->pc = 0x115478u;
label_115478:
    // 0x115478: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x115478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x11547c: 0xc044fce  jal         func_113F38
    ctx->pc = 0x11547Cu;
    SET_GPR_U32(ctx, 31, 0x115484u);
    ctx->pc = 0x115480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11547Cu;
            // 0x115480: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x113F38u;
    if (runtime->hasFunction(0x113F38u)) {
        auto targetFn = runtime->lookupFunction(0x113F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115484u; }
        if (ctx->pc != 0x115484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sceFsSigSema_0x113f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115484u; }
        if (ctx->pc != 0x115484u) { return; }
    }
    ctx->pc = 0x115484u;
label_115484:
    // 0x115484: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x115484u;
    {
        const bool branch_taken_0x115484 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x115484) {
            ctx->pc = 0x11549Cu;
            goto label_11549c;
        }
    }
    ctx->pc = 0x11548Cu;
    // 0x11548c: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x11548Cu;
    SET_GPR_U32(ctx, 31, 0x115494u);
    ctx->pc = 0x115490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11548Cu;
            // 0x115490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115494u; }
        if (ctx->pc != 0x115494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x115494u; }
        if (ctx->pc != 0x115494u) { return; }
    }
    ctx->pc = 0x115494u;
label_115494:
    // 0x115494: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x115494u;
    {
        const bool branch_taken_0x115494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x115498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x115494u;
            // 0x115498: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115494) {
            ctx->pc = 0x1154B0u;
            goto label_1154b0;
        }
    }
    ctx->pc = 0x11549Cu;
label_11549c:
    // 0x11549c: 0xc044048  jal         func_110120
    ctx->pc = 0x11549Cu;
    SET_GPR_U32(ctx, 31, 0x1154A4u);
    ctx->pc = 0x1154A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11549Cu;
            // 0x1154a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110120u;
    if (runtime->hasFunction(0x110120u)) {
        auto targetFn = runtime->lookupFunction(0x110120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154A4u; }
        if (ctx->pc != 0x1154A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WaitSema_0x110120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154A4u; }
        if (ctx->pc != 0x1154A4u) { return; }
    }
    ctx->pc = 0x1154A4u;
label_1154a4:
    // 0x1154a4: 0xc04403c  jal         func_1100F0
    ctx->pc = 0x1154A4u;
    SET_GPR_U32(ctx, 31, 0x1154ACu);
    ctx->pc = 0x1154A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1154A4u;
            // 0x1154a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1100F0u;
    if (runtime->hasFunction(0x1100F0u)) {
        auto targetFn = runtime->lookupFunction(0x1100F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154ACu; }
        if (ctx->pc != 0x1154ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteSema_0x1100f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1154ACu; }
        if (ctx->pc != 0x1154ACu) { return; }
    }
    ctx->pc = 0x1154ACu;
label_1154ac:
    // 0x1154ac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x1154acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1154b0:
    // 0x1154b0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x1154b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1154b4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x1154b4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1154b8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1154b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1154bc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x1154bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1154c0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1154c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1154c4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x1154c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1154c8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1154c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1154cc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x1154ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1154d0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1154d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1154d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1154D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1154D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1154D4u;
            // 0x1154d8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1154DCu;
}
