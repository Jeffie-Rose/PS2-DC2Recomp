#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ScanInfoFile__FP11CCharacter2PUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i
// Address: 0x175620 - 0x175798
void ScanInfoFile__FP11CCharacter2PUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i_0x175620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScanInfoFile__FP11CCharacter2PUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2i_0x175620");
#endif

    switch (ctx->pc) {
        case 0x175680u: goto label_175680;
        case 0x175704u: goto label_175704;
        case 0x175720u: goto label_175720;
        case 0x175734u: goto label_175734;
        case 0x175744u: goto label_175744;
        case 0x175754u: goto label_175754;
        default: break;
    }

    ctx->pc = 0x175620u;

    // 0x175620: 0x27bdf080  addiu       $sp, $sp, -0xF80
    ctx->pc = 0x175620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963328));
    // 0x175624: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x175624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x175628: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x175628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x17562c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x17562cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x175630: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x175630u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175634: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x175634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x175638: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x175638u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17563c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x17563cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x175640: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x175640u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175644: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x175644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x175648: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x175648u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17564c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x175650: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x175650u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175654: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175658: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x175658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17565c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x175660: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x175660u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175664: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x175664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x175668: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x175668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17566c: 0x8ce30028  lw          $v1, 0x28($a3)
    ctx->pc = 0x17566cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
    // 0x175670: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x175670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175674: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x175674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x175678: 0xc051a7c  jal         func_1469F0
    ctx->pc = 0x175678u;
    SET_GPR_U32(ctx, 31, 0x175680u);
    ctx->pc = 0x17567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175678u;
            // 0x17567c: 0x628023  subu        $s0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1469F0u;
    if (runtime->hasFunction(0x1469F0u)) {
        auto targetFn = runtime->lookupFunction(0x1469F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175680u; }
        if (ctx->pc != 0x175680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CScriptInterpreterFv_0x1469f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175680u; }
        if (ctx->pc != 0x175680u) { return; }
    }
    ctx->pc = 0x175680u;
label_175680:
    // 0x175680: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x175680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x175684: 0x8fa20f80  lw          $v0, 0xF80($sp)
    ctx->pc = 0x175684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3968)));
    // 0x175688: 0xac200670  sw          $zero, 0x670($at)
    ctx->pc = 0x175688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1648), GPR_U32(ctx, 0));
    // 0x17568c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x17568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175690: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x175690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x175694: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175698: 0xac200674  sw          $zero, 0x674($at)
    ctx->pc = 0x175698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1652), GPR_U32(ctx, 0));
    // 0x17569c: 0x27a60f7c  addiu       $a2, $sp, 0xF7C
    ctx->pc = 0x17569cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 3964));
    // 0x1756a0: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1756a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1756a4: 0xaf9589e0  sw          $s5, -0x7620($gp)
    ctx->pc = 0x1756a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937056), GPR_U32(ctx, 21));
    // 0x1756a8: 0xac200678  sw          $zero, 0x678($at)
    ctx->pc = 0x1756a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1656), GPR_U32(ctx, 0));
    // 0x1756ac: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1756acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1756b0: 0xaf8289b0  sw          $v0, -0x7650($gp)
    ctx->pc = 0x1756b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 2));
    // 0x1756b4: 0xac20067c  sw          $zero, 0x67C($at)
    ctx->pc = 0x1756b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1660), GPR_U32(ctx, 0));
    // 0x1756b8: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1756b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1756bc: 0xaf9389f0  sw          $s3, -0x7610($gp)
    ctx->pc = 0x1756bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 19));
    // 0x1756c0: 0xac200680  sw          $zero, 0x680($at)
    ctx->pc = 0x1756c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1664), GPR_U32(ctx, 0));
    // 0x1756c4: 0x3c01003d  lui         $at, 0x3D
    ctx->pc = 0x1756c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)61 << 16));
    // 0x1756c8: 0xaf9689e4  sw          $s6, -0x761C($gp)
    ctx->pc = 0x1756c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 22));
    // 0x1756cc: 0xaf9789ec  sw          $s7, -0x7614($gp)
    ctx->pc = 0x1756ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937068), GPR_U32(ctx, 23));
    // 0x1756d0: 0xaf9e89ac  sw          $fp, -0x7654($gp)
    ctx->pc = 0x1756d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 30));
    // 0x1756d4: 0xaf9189dc  sw          $s1, -0x7624($gp)
    ctx->pc = 0x1756d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937052), GPR_U32(ctx, 17));
    // 0x1756d8: 0xaf9489a8  sw          $s4, -0x7658($gp)
    ctx->pc = 0x1756d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 20));
    // 0x1756dc: 0xaf8089c0  sw          $zero, -0x7640($gp)
    ctx->pc = 0x1756dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937024), GPR_U32(ctx, 0));
    // 0x1756e0: 0xaf8089bc  sw          $zero, -0x7644($gp)
    ctx->pc = 0x1756e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 0));
    // 0x1756e4: 0xaf8089b8  sw          $zero, -0x7648($gp)
    ctx->pc = 0x1756e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 0));
    // 0x1756e8: 0xaf8089d4  sw          $zero, -0x762C($gp)
    ctx->pc = 0x1756e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937044), GPR_U32(ctx, 0));
    // 0x1756ec: 0xaf8089d8  sw          $zero, -0x7628($gp)
    ctx->pc = 0x1756ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937048), GPR_U32(ctx, 0));
    // 0x1756f0: 0xaf8089c4  sw          $zero, -0x763C($gp)
    ctx->pc = 0x1756f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937028), GPR_U32(ctx, 0));
    // 0x1756f4: 0xaf8089c8  sw          $zero, -0x7638($gp)
    ctx->pc = 0x1756f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937032), GPR_U32(ctx, 0));
    // 0x1756f8: 0xaf8089cc  sw          $zero, -0x7634($gp)
    ctx->pc = 0x1756f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937036), GPR_U32(ctx, 0));
    // 0x1756fc: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1756FCu;
    SET_GPR_U32(ctx, 31, 0x175704u);
    ctx->pc = 0x175700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1756FCu;
            // 0x175700: 0xac200684  sw          $zero, 0x684($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1668), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175704u; }
        if (ctx->pc != 0x175704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175704u; }
        if (ctx->pc != 0x175704u) { return; }
    }
    ctx->pc = 0x175704u;
label_175704:
    // 0x175704: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x175704u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175708: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x175708u;
    {
        const bool branch_taken_0x175708 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175708u;
            // 0x17570c: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175708) {
            ctx->pc = 0x175728u;
            goto label_175728;
        }
    }
    ctx->pc = 0x175710u;
    // 0x175710: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x175710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x175714: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x175714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175718: 0xc04a0d2  jal         func_128348
    ctx->pc = 0x175718u;
    SET_GPR_U32(ctx, 31, 0x175720u);
    ctx->pc = 0x17571Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x175718u;
            // 0x17571c: 0x24843960  addiu       $a0, $a0, 0x3960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175720u; }
        if (ctx->pc != 0x175720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175720u; }
        if (ctx->pc != 0x175720u) { return; }
    }
    ctx->pc = 0x175720u;
label_175720:
    // 0x175720: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x175720u;
    {
        const bool branch_taken_0x175720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175720u;
            // 0x175724: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175720) {
            ctx->pc = 0x17576Cu;
            goto label_17576c;
        }
    }
    ctx->pc = 0x175728u;
label_175728:
    // 0x175728: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x175728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17572c: 0xc0519ec  jal         func_1467B0
    ctx->pc = 0x17572Cu;
    SET_GPR_U32(ctx, 31, 0x175734u);
    ctx->pc = 0x175730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17572Cu;
            // 0x175730: 0x24a54c70  addiu       $a1, $a1, 0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1467B0u;
    if (runtime->hasFunction(0x1467B0u)) {
        auto targetFn = runtime->lookupFunction(0x1467B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175734u; }
        if (ctx->pc != 0x175734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTag__18CScriptInterpreterFP13SPI_TAG_PARAM_0x1467b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175734u; }
        if (ctx->pc != 0x175734u) { return; }
    }
    ctx->pc = 0x175734u;
label_175734:
    // 0x175734: 0x8fa60f7c  lw          $a2, 0xF7C($sp)
    ctx->pc = 0x175734u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 3964)));
    // 0x175738: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x175738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17573c: 0xc051a60  jal         func_146980
    ctx->pc = 0x17573Cu;
    SET_GPR_U32(ctx, 31, 0x175744u);
    ctx->pc = 0x175740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17573Cu;
            // 0x175740: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146980u;
    if (runtime->hasFunction(0x146980u)) {
        auto targetFn = runtime->lookupFunction(0x146980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175744u; }
        if (ctx->pc != 0x175744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScript__18CScriptInterpreterFPci_0x146980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175744u; }
        if (ctx->pc != 0x175744u) { return; }
    }
    ctx->pc = 0x175744u;
label_175744:
    // 0x175744: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x175744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x175748: 0xaf8089b4  sw          $zero, -0x764C($gp)
    ctx->pc = 0x175748u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 0));
    // 0x17574c: 0xc0519c8  jal         func_146720
    ctx->pc = 0x17574Cu;
    SET_GPR_U32(ctx, 31, 0x175754u);
    ctx->pc = 0x175750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17574Cu;
            // 0x175750: 0xaf9189e8  sw          $s1, -0x7618($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146720u;
    if (runtime->hasFunction(0x146720u)) {
        auto targetFn = runtime->lookupFunction(0x146720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175754u; }
        if (ctx->pc != 0x175754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__18CScriptInterpreterFv_0x146720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x175754u; }
        if (ctx->pc != 0x175754u) { return; }
    }
    ctx->pc = 0x175754u;
label_175754:
    // 0x175754: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x175754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x175758: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x175758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17575c: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x17575cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x175760: 0x2038023  subu        $s0, $s0, $v1
    ctx->pc = 0x175760u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x175764: 0xae900118  sw          $s0, 0x118($s4)
    ctx->pc = 0x175764u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 280), GPR_U32(ctx, 16));
    // 0x175768: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x175768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_17576c:
    // 0x17576c: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x17576cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x175770: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x175770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x175774: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x175774u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x175778: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x175778u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17577c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17577cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175780: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175780u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x175788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17578c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17578cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175790: 0x3e00008  jr          $ra
    ctx->pc = 0x175790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x175790u;
            // 0x175794: 0x27bd0f80  addiu       $sp, $sp, 0xF80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 3968));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x175798u;
}
