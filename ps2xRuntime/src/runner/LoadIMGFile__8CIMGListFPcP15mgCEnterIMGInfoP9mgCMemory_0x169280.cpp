#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadIMGFile__8CIMGListFPcP15mgCEnterIMGInfoP9mgCMemory
// Address: 0x169280 - 0x169390
void LoadIMGFile__8CIMGListFPcP15mgCEnterIMGInfoP9mgCMemory_0x169280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadIMGFile__8CIMGListFPcP15mgCEnterIMGInfoP9mgCMemory_0x169280");
#endif

    switch (ctx->pc) {
        case 0x1692c0u: goto label_1692c0;
        case 0x1692e0u: goto label_1692e0;
        case 0x1692f0u: goto label_1692f0;
        case 0x169304u: goto label_169304;
        case 0x169310u: goto label_169310;
        case 0x169324u: goto label_169324;
        case 0x169350u: goto label_169350;
        default: break;
    }

    ctx->pc = 0x169280u;

    // 0x169280: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x169280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x169284: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x169284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x169288: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x169288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16928c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16928cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x169290: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x169290u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169294: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x169294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x169298: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x169298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16929c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x16929cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1692a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1692a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692a4: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1692A4u;
    {
        const bool branch_taken_0x1692a4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1692A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692A4u;
            // 0x1692a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692a4) {
            ctx->pc = 0x1692B4u;
            goto label_1692b4;
        }
    }
    ctx->pc = 0x1692ACu;
    // 0x1692ac: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1692ACu;
    {
        const bool branch_taken_0x1692ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692ACu;
            // 0x1692b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692ac) {
            ctx->pc = 0x169374u;
            goto label_169374;
        }
    }
    ctx->pc = 0x1692B4u;
label_1692b4:
    // 0x1692b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1692b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692b8: 0xc04a422  jal         func_129088
    ctx->pc = 0x1692B8u;
    SET_GPR_U32(ctx, 31, 0x1692C0u);
    ctx->pc = 0x1692BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692B8u;
            // 0x1692bc: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692C0u; }
        if (ctx->pc != 0x1692C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692C0u; }
        if (ctx->pc != 0x1692C0u) { return; }
    }
    ctx->pc = 0x1692C0u;
label_1692c0:
    // 0x1692c0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1692c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1692c4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1692c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x1692c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1692C8u;
    {
        const bool branch_taken_0x1692c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692C8u;
            // 0x1692cc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692c8) {
            ctx->pc = 0x1692D8u;
            goto label_1692d8;
        }
    }
    ctx->pc = 0x1692D0u;
    // 0x1692d0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1692d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x1692d4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1692d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1692d8:
    // 0x1692d8: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1692D8u;
    SET_GPR_U32(ctx, 31, 0x1692E0u);
    ctx->pc = 0x1692DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692D8u;
            // 0x1692dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692E0u; }
        if (ctx->pc != 0x1692E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692E0u; }
        if (ctx->pc != 0x1692E0u) { return; }
    }
    ctx->pc = 0x1692E0u;
label_1692e0:
    // 0x1692e0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1692e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1692e4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1692e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1692e8: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x1692E8u;
    SET_GPR_U32(ctx, 31, 0x1692F0u);
    ctx->pc = 0x1692ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692E8u;
            // 0x1692ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692F0u; }
        if (ctx->pc != 0x1692F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1692F0u; }
        if (ctx->pc != 0x1692F0u) { return; }
    }
    ctx->pc = 0x1692F0u;
label_1692f0:
    // 0x1692f0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1692F0u;
    {
        const bool branch_taken_0x1692f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1692F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1692F0u;
            // 0x1692f4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1692f0) {
            ctx->pc = 0x169370u;
            goto label_169370;
        }
    }
    ctx->pc = 0x1692F8u;
    // 0x1692f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1692f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1692fc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1692FCu;
    SET_GPR_U32(ctx, 31, 0x169304u);
    ctx->pc = 0x169300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1692FCu;
            // 0x169300: 0x24050012  addiu       $a1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169304u; }
        if (ctx->pc != 0x169304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169304u; }
        if (ctx->pc != 0x169304u) { return; }
    }
    ctx->pc = 0x169304u;
label_169304:
    // 0x169304: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x169304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x169308: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x169308u;
    SET_GPR_U32(ctx, 31, 0x169310u);
    ctx->pc = 0x16930Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169308u;
            // 0x16930c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169310u; }
        if (ctx->pc != 0x169310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169310u; }
        if (ctx->pc != 0x169310u) { return; }
    }
    ctx->pc = 0x169310u;
label_169310:
    // 0x169310: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x169310u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x169314: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x169314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x169318: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x169318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16931c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16931cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169320: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x169320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_169324:
    // 0x169324: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x169324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169328: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x169328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16932c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x16932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x169330: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x169330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x169334: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x169334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x169338: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x169338u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x16933c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16933Cu;
    {
        const bool branch_taken_0x16933c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x169340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16933Cu;
            // 0x169340: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16933c) {
            ctx->pc = 0x169324u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_169324;
        }
    }
    ctx->pc = 0x169344u;
    // 0x169344: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x169344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x169348: 0x24e50080  addiu       $a1, $a3, 0x80
    ctx->pc = 0x169348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x16934c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x16934cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_169350:
    // 0x169350: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x169350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x169354: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x169354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x169358: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x169358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16935c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16935cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x169360: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x169360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x169364: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x169364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x169368: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x169368u;
    {
        const bool branch_taken_0x169368 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x16936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169368u;
            // 0x16936c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169368) {
            ctx->pc = 0x169350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_169350;
        }
    }
    ctx->pc = 0x169370u;
label_169370:
    // 0x169370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x169370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_169374:
    // 0x169374: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x169374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x169378: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x169378u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16937c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16937cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169388: 0x3e00008  jr          $ra
    ctx->pc = 0x169388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169388u;
            // 0x16938c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169390u;
}
