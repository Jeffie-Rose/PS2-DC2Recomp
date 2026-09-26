#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventSeqInit__Fv
// Address: 0x261300 - 0x2614f0
void EventSeqInit__Fv_0x261300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventSeqInit__Fv_0x261300");
#endif

    switch (ctx->pc) {
        case 0x261328u: goto label_261328;
        case 0x261454u: goto label_261454;
        case 0x26145cu: goto label_26145c;
        case 0x261478u: goto label_261478;
        case 0x261490u: goto label_261490;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614bcu: goto label_2614bc;
        default: break;
    }

    ctx->pc = 0x261300u;

    // 0x261300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x261304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261308: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x261308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26130c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26130cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261310: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x261310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x261314: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x261314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x261318: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x26131c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26131cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x261320: 0x24a5e880  addiu       $a1, $a1, -0x1780
    ctx->pc = 0x261320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961280));
    // 0x261324: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x261324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_261328:
    // 0x261328: 0xa74021  addu        $t0, $a1, $a3
    ctx->pc = 0x261328u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x26132c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x26132cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x261330: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x261330u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x261334: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x261334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x261338: 0xad040004  sw          $a0, 0x4($t0)
    ctx->pc = 0x261338u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 4));
    // 0x26133c: 0x24e70080  addiu       $a3, $a3, 0x80
    ctx->pc = 0x26133cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x261340: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x261340u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x261344: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x261344u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x261348: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x261348u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x26134c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x26134cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x261350: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x261350u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x261354: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x261354u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x261358: 0xad040010  sw          $a0, 0x10($t0)
    ctx->pc = 0x261358u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 4));
    // 0x26135c: 0xad040014  sw          $a0, 0x14($t0)
    ctx->pc = 0x26135cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 4));
    // 0x261360: 0xad030018  sw          $v1, 0x18($t0)
    ctx->pc = 0x261360u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 3));
    // 0x261364: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x261364u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x261368: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x261368u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x26136c: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x26136cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x261370: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x261370u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x261374: 0xad00001c  sw          $zero, 0x1C($t0)
    ctx->pc = 0x261374u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 0));
    // 0x261378: 0xad040020  sw          $a0, 0x20($t0)
    ctx->pc = 0x261378u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 4));
    // 0x26137c: 0xad040024  sw          $a0, 0x24($t0)
    ctx->pc = 0x26137cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 4));
    // 0x261380: 0xad030028  sw          $v1, 0x28($t0)
    ctx->pc = 0x261380u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 3));
    // 0x261384: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x261384u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x261388: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x261388u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x26138c: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x26138cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x261390: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x261390u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x261394: 0xad00002c  sw          $zero, 0x2C($t0)
    ctx->pc = 0x261394u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 44), GPR_U32(ctx, 0));
    // 0x261398: 0xad040030  sw          $a0, 0x30($t0)
    ctx->pc = 0x261398u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 4));
    // 0x26139c: 0xad040034  sw          $a0, 0x34($t0)
    ctx->pc = 0x26139cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 52), GPR_U32(ctx, 4));
    // 0x2613a0: 0xad030038  sw          $v1, 0x38($t0)
    ctx->pc = 0x2613a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 56), GPR_U32(ctx, 3));
    // 0x2613a4: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x2613a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x2613a8: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x2613a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x2613ac: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x2613acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x2613b0: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x2613b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x2613b4: 0xad00003c  sw          $zero, 0x3C($t0)
    ctx->pc = 0x2613b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 60), GPR_U32(ctx, 0));
    // 0x2613b8: 0xad040040  sw          $a0, 0x40($t0)
    ctx->pc = 0x2613b8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 4));
    // 0x2613bc: 0xad040044  sw          $a0, 0x44($t0)
    ctx->pc = 0x2613bcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 68), GPR_U32(ctx, 4));
    // 0x2613c0: 0xad030048  sw          $v1, 0x48($t0)
    ctx->pc = 0x2613c0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 3));
    // 0x2613c4: 0xad00004c  sw          $zero, 0x4C($t0)
    ctx->pc = 0x2613c4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 0));
    // 0x2613c8: 0xad00004c  sw          $zero, 0x4C($t0)
    ctx->pc = 0x2613c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 0));
    // 0x2613cc: 0xad00004c  sw          $zero, 0x4C($t0)
    ctx->pc = 0x2613ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 0));
    // 0x2613d0: 0xad00004c  sw          $zero, 0x4C($t0)
    ctx->pc = 0x2613d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 0));
    // 0x2613d4: 0xad00004c  sw          $zero, 0x4C($t0)
    ctx->pc = 0x2613d4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 0));
    // 0x2613d8: 0xad040050  sw          $a0, 0x50($t0)
    ctx->pc = 0x2613d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 4));
    // 0x2613dc: 0xad040054  sw          $a0, 0x54($t0)
    ctx->pc = 0x2613dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 84), GPR_U32(ctx, 4));
    // 0x2613e0: 0xad030058  sw          $v1, 0x58($t0)
    ctx->pc = 0x2613e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 88), GPR_U32(ctx, 3));
    // 0x2613e4: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x2613e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
    // 0x2613e8: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x2613e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
    // 0x2613ec: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x2613ecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
    // 0x2613f0: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x2613f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
    // 0x2613f4: 0xad00005c  sw          $zero, 0x5C($t0)
    ctx->pc = 0x2613f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 92), GPR_U32(ctx, 0));
    // 0x2613f8: 0xad040060  sw          $a0, 0x60($t0)
    ctx->pc = 0x2613f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 4));
    // 0x2613fc: 0xad040064  sw          $a0, 0x64($t0)
    ctx->pc = 0x2613fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 100), GPR_U32(ctx, 4));
    // 0x261400: 0xad030068  sw          $v1, 0x68($t0)
    ctx->pc = 0x261400u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 104), GPR_U32(ctx, 3));
    // 0x261404: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x261404u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x261408: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x261408u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x26140c: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x26140cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x261410: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x261410u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x261414: 0xad00006c  sw          $zero, 0x6C($t0)
    ctx->pc = 0x261414u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 0));
    // 0x261418: 0xad040070  sw          $a0, 0x70($t0)
    ctx->pc = 0x261418u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 4));
    // 0x26141c: 0xad040074  sw          $a0, 0x74($t0)
    ctx->pc = 0x26141cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 116), GPR_U32(ctx, 4));
    // 0x261420: 0xad030078  sw          $v1, 0x78($t0)
    ctx->pc = 0x261420u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 120), GPR_U32(ctx, 3));
    // 0x261424: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x261424u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x261428: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x261428u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x26142c: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x26142cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x261430: 0xad00007c  sw          $zero, 0x7C($t0)
    ctx->pc = 0x261430u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
    // 0x261434: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x261434u;
    {
        const bool branch_taken_0x261434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261434u;
            // 0x261438: 0xad00007c  sw          $zero, 0x7C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261434) {
            ctx->pc = 0x261328u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261328;
        }
    }
    ctx->pc = 0x26143Cu;
    // 0x26143c: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x26143cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x261440: 0x3c0501ef  lui         $a1, 0x1EF
    ctx->pc = 0x261440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)495 << 16));
    // 0x261444: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x261444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x261448: 0x24a59920  addiu       $a1, $a1, -0x66E0
    ctx->pc = 0x261448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940960));
    // 0x26144c: 0xc096478  jal         func_2591E0
    ctx->pc = 0x26144Cu;
    SET_GPR_U32(ctx, 31, 0x261454u);
    ctx->pc = 0x261450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26144Cu;
            // 0x261450: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2591E0u;
    if (runtime->hasFunction(0x2591E0u)) {
        auto targetFn = runtime->lookupFunction(0x2591E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261454u; }
        if (ctx->pc != 0x261454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x2591e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261454u; }
        if (ctx->pc != 0x261454u) { return; }
    }
    ctx->pc = 0x261454u;
label_261454:
    // 0x261454: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261454u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261458: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x261458u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26145c:
    // 0x26145c: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x26145cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x261460: 0x3c0501ef  lui         $a1, 0x1EF
    ctx->pc = 0x261460u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)495 << 16));
    // 0x261464: 0x24425430  addiu       $v0, $v0, 0x5430
    ctx->pc = 0x261464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
    // 0x261468: 0x24a50430  addiu       $a1, $a1, 0x430
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1072));
    // 0x26146c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x261470: 0xc097088  jal         func_25C220
    ctx->pc = 0x261470u;
    SET_GPR_U32(ctx, 31, 0x261478u);
    ctx->pc = 0x261474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261470u;
            // 0x261474: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C220u;
    if (runtime->hasFunction(0x25C220u)) {
        auto targetFn = runtime->lookupFunction(0x25C220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261478u; }
        if (ctx->pc != 0x261478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneObjSeqFP12_SEN_OBJ_SEQi_0x25c220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x261478u; }
        if (ctx->pc != 0x261478u) { return; }
    }
    ctx->pc = 0x261478u;
label_261478:
    // 0x261478: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x261478u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26147c: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x26147cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x261480: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x261480u;
    {
        const bool branch_taken_0x261480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x261480u;
            // 0x261484: 0x263105f0  addiu       $s1, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261480) {
            ctx->pc = 0x26145Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26145c;
        }
    }
    ctx->pc = 0x261488u;
    // 0x261488: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x261488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26148c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26148cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261490:
    // 0x261490: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x261490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x261494: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x261494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x261498: 0xc0a42a4  jal         func_290A90
    ctx->pc = 0x261498u;
    SET_GPR_U32(ctx, 31, 0x2614A0u);
    ctx->pc = 0x26149Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x261498u;
            // 0x26149c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A90u;
    if (runtime->hasFunction(0x290A90u)) {
        auto targetFn = runtime->lookupFunction(0x290A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2614A0u; }
        if (ctx->pc != 0x2614A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEventSprite2Fv_0x290a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2614A0u; }
        if (ctx->pc != 0x2614A0u) { return; }
    }
    ctx->pc = 0x2614A0u;
label_2614a0:
    // 0x2614a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2614a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2614a4: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x2614a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x2614a8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2614A8u;
    {
        const bool branch_taken_0x2614a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2614ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2614A8u;
            // 0x2614ac: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614a8) {
            ctx->pc = 0x261490u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261490;
        }
    }
    ctx->pc = 0x2614B0u;
    // 0x2614b0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x2614b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x2614b4: 0xc098178  jal         func_2605E0
    ctx->pc = 0x2614B4u;
    SET_GPR_U32(ctx, 31, 0x2614BCu);
    ctx->pc = 0x2614B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2614B4u;
            // 0x2614b8: 0x24842a40  addiu       $a0, $a0, 0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2605E0u;
    if (runtime->hasFunction(0x2605E0u)) {
        auto targetFn = runtime->lookupFunction(0x2605E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2614BCu; }
        if (ctx->pc != 0x2614BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CScreenEffectFv_0x2605e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2614BCu; }
        if (ctx->pc != 0x2614BCu) { return; }
    }
    ctx->pc = 0x2614BCu;
label_2614bc:
    // 0x2614bc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2614bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2614c0: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x2614c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
    // 0x2614c4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2614c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2614c8: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x2614c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
    // 0x2614cc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2614ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2614d0: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x2614d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
    // 0x2614d4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x2614d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x2614d8: 0xac202a3c  sw          $zero, 0x2A3C($at)
    ctx->pc = 0x2614d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10812), GPR_U32(ctx, 0));
    // 0x2614dc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2614dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2614e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2614e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2614e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2614e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2614e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2614E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2614ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2614E8u;
            // 0x2614ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2614F0u;
}
