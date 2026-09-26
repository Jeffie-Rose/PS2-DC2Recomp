#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventFinish__Fv
// Address: 0x2620a0 - 0x262354
void EdEventFinish__Fv_0x2620a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventFinish__Fv_0x2620a0");
#endif

    switch (ctx->pc) {
        case 0x2620c8u: goto label_2620c8;
        case 0x2620d0u: goto label_2620d0;
        case 0x2620ecu: goto label_2620ec;
        case 0x262104u: goto label_262104;
        case 0x262114u: goto label_262114;
        case 0x262228u: goto label_262228;
        case 0x26224cu: goto label_26224c;
        case 0x26225cu: goto label_26225c;
        case 0x262264u: goto label_262264;
        case 0x262274u: goto label_262274;
        case 0x262284u: goto label_262284;
        case 0x2622b0u: goto label_2622b0;
        case 0x2622c4u: goto label_2622c4;
        case 0x2622e0u: goto label_2622e0;
        case 0x2622f8u: goto label_2622f8;
        case 0x262300u: goto label_262300;
        case 0x26233cu: goto label_26233c;
        default: break;
    }

    ctx->pc = 0x2620a0u;

    // 0x2620a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2620a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2620a4: 0x3c0401ef  lui         $a0, 0x1EF
    ctx->pc = 0x2620a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)495 << 16));
    // 0x2620a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2620a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2620ac: 0x3c0501ef  lui         $a1, 0x1EF
    ctx->pc = 0x2620acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)495 << 16));
    // 0x2620b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2620b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2620b4: 0x2484f920  addiu       $a0, $a0, -0x6E0
    ctx->pc = 0x2620b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965536));
    // 0x2620b8: 0x24a59920  addiu       $a1, $a1, -0x66E0
    ctx->pc = 0x2620b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940960));
    // 0x2620bc: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2620bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2620c0: 0xc096478  jal         func_2591E0
    ctx->pc = 0x2620C0u;
    SET_GPR_U32(ctx, 31, 0x2620C8u);
    ctx->pc = 0x2620C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2620C0u;
            // 0x2620c4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2591E0u;
    if (runtime->hasFunction(0x2591E0u)) {
        auto targetFn = runtime->lookupFunction(0x2591E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620C8u; }
        if (ctx->pc != 0x2620C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneCmrSeqFP12_SEN_CMR_SEQi_0x2591e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620C8u; }
        if (ctx->pc != 0x2620C8u) { return; }
    }
    ctx->pc = 0x2620C8u;
label_2620c8:
    // 0x2620c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2620c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2620cc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2620ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2620d0:
    // 0x2620d0: 0x3c0201ef  lui         $v0, 0x1EF
    ctx->pc = 0x2620d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)495 << 16));
    // 0x2620d4: 0x3c0501ef  lui         $a1, 0x1EF
    ctx->pc = 0x2620d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)495 << 16));
    // 0x2620d8: 0x24425430  addiu       $v0, $v0, 0x5430
    ctx->pc = 0x2620d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21552));
    // 0x2620dc: 0x24a50430  addiu       $a1, $a1, 0x430
    ctx->pc = 0x2620dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1072));
    // 0x2620e0: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x2620e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2620e4: 0xc097088  jal         func_25C220
    ctx->pc = 0x2620E4u;
    SET_GPR_U32(ctx, 31, 0x2620ECu);
    ctx->pc = 0x2620E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2620E4u;
            // 0x2620e8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25C220u;
    if (runtime->hasFunction(0x25C220u)) {
        auto targetFn = runtime->lookupFunction(0x25C220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620ECu; }
        if (ctx->pc != 0x2620ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSceneObjSeqFP12_SEN_OBJ_SEQi_0x25c220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2620ECu; }
        if (ctx->pc != 0x2620ECu) { return; }
    }
    ctx->pc = 0x2620ECu;
label_2620ec:
    // 0x2620ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2620ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2620f0: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x2620f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x2620f4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2620F4u;
    {
        const bool branch_taken_0x2620f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2620F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2620F4u;
            // 0x2620f8: 0x263105f0  addiu       $s1, $s1, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2620f4) {
            ctx->pc = 0x2620D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2620d0;
        }
    }
    ctx->pc = 0x2620FCu;
    // 0x2620fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2620fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262100: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x262100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262104:
    // 0x262104: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x262104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x262108: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x262108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x26210c: 0xc0a42a4  jal         func_290A90
    ctx->pc = 0x26210Cu;
    SET_GPR_U32(ctx, 31, 0x262114u);
    ctx->pc = 0x262110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26210Cu;
            // 0x262110: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A90u;
    if (runtime->hasFunction(0x290A90u)) {
        auto targetFn = runtime->lookupFunction(0x290A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262114u; }
        if (ctx->pc != 0x262114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEventSprite2Fv_0x290a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262114u; }
        if (ctx->pc != 0x262114u) { return; }
    }
    ctx->pc = 0x262114u;
label_262114:
    // 0x262114: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x262118: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x262118u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x26211c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26211Cu;
    {
        const bool branch_taken_0x26211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26211Cu;
            // 0x262120: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26211c) {
            ctx->pc = 0x262104u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262104;
        }
    }
    ctx->pc = 0x262124u;
    // 0x262124: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262128: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x262128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x26212c: 0xac2000d8  sw          $zero, 0xD8($at)
    ctx->pc = 0x26212cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 216), GPR_U32(ctx, 0));
    // 0x262130: 0x24429cb0  addiu       $v0, $v0, -0x6350
    ctx->pc = 0x262130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941872));
    // 0x262134: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262138: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x262138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26213c: 0xac2200d0  sw          $v0, 0xD0($at)
    ctx->pc = 0x26213cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 208), GPR_U32(ctx, 2));
    // 0x262140: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262144: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x262144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x262148: 0xac2300dc  sw          $v1, 0xDC($at)
    ctx->pc = 0x262148u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 220), GPR_U32(ctx, 3));
    // 0x26214c: 0x2442b0b0  addiu       $v0, $v0, -0x4F50
    ctx->pc = 0x26214cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946992));
    // 0x262150: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262154: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x262154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x262158: 0xac220130  sw          $v0, 0x130($at)
    ctx->pc = 0x262158u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 304), GPR_U32(ctx, 2));
    // 0x26215c: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x26215cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x262160: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262164: 0x2442c4b0  addiu       $v0, $v0, -0x3B50
    ctx->pc = 0x262164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952112));
    // 0x262168: 0xaf8097ec  sw          $zero, -0x6814($gp)
    ctx->pc = 0x262168u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940652), GPR_U32(ctx, 0));
    // 0x26216c: 0xac220190  sw          $v0, 0x190($at)
    ctx->pc = 0x26216cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 400), GPR_U32(ctx, 2));
    // 0x262170: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x262170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x262174: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262178: 0x2442d8b0  addiu       $v0, $v0, -0x2750
    ctx->pc = 0x262178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957232));
    // 0x26217c: 0xac2201f0  sw          $v0, 0x1F0($at)
    ctx->pc = 0x26217cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 496), GPR_U32(ctx, 2));
    // 0x262180: 0x3c0201ee  lui         $v0, 0x1EE
    ctx->pc = 0x262180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)494 << 16));
    // 0x262184: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262188: 0x2442ecb0  addiu       $v0, $v0, -0x1350
    ctx->pc = 0x262188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962352));
    // 0x26218c: 0xac220250  sw          $v0, 0x250($at)
    ctx->pc = 0x26218cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 592), GPR_U32(ctx, 2));
    // 0x262190: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262194: 0xac2000d4  sw          $zero, 0xD4($at)
    ctx->pc = 0x262194u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 212), GPR_U32(ctx, 0));
    // 0x262198: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26219c: 0xac2000f4  sw          $zero, 0xF4($at)
    ctx->pc = 0x26219cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 244), GPR_U32(ctx, 0));
    // 0x2621a0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621a4: 0xac23013c  sw          $v1, 0x13C($at)
    ctx->pc = 0x2621a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 316), GPR_U32(ctx, 3));
    // 0x2621a8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621ac: 0xac200138  sw          $zero, 0x138($at)
    ctx->pc = 0x2621acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 312), GPR_U32(ctx, 0));
    // 0x2621b0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621b4: 0xac200134  sw          $zero, 0x134($at)
    ctx->pc = 0x2621b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 308), GPR_U32(ctx, 0));
    // 0x2621b8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621bc: 0xac200154  sw          $zero, 0x154($at)
    ctx->pc = 0x2621bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 340), GPR_U32(ctx, 0));
    // 0x2621c0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621c4: 0xac23019c  sw          $v1, 0x19C($at)
    ctx->pc = 0x2621c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 412), GPR_U32(ctx, 3));
    // 0x2621c8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621cc: 0xac200198  sw          $zero, 0x198($at)
    ctx->pc = 0x2621ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 408), GPR_U32(ctx, 0));
    // 0x2621d0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621d4: 0xac200194  sw          $zero, 0x194($at)
    ctx->pc = 0x2621d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 404), GPR_U32(ctx, 0));
    // 0x2621d8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621dc: 0xac2001b4  sw          $zero, 0x1B4($at)
    ctx->pc = 0x2621dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 436), GPR_U32(ctx, 0));
    // 0x2621e0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621e4: 0xac2301fc  sw          $v1, 0x1FC($at)
    ctx->pc = 0x2621e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 508), GPR_U32(ctx, 3));
    // 0x2621e8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621ec: 0xac23025c  sw          $v1, 0x25C($at)
    ctx->pc = 0x2621ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 604), GPR_U32(ctx, 3));
    // 0x2621f0: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621f4: 0xac2001f8  sw          $zero, 0x1F8($at)
    ctx->pc = 0x2621f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 504), GPR_U32(ctx, 0));
    // 0x2621f8: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x2621f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x2621fc: 0xac2001f4  sw          $zero, 0x1F4($at)
    ctx->pc = 0x2621fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 500), GPR_U32(ctx, 0));
    // 0x262200: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262204: 0xac200214  sw          $zero, 0x214($at)
    ctx->pc = 0x262204u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 532), GPR_U32(ctx, 0));
    // 0x262208: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26220c: 0xac200258  sw          $zero, 0x258($at)
    ctx->pc = 0x26220cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 600), GPR_U32(ctx, 0));
    // 0x262210: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x262214: 0xac200254  sw          $zero, 0x254($at)
    ctx->pc = 0x262214u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 596), GPR_U32(ctx, 0));
    // 0x262218: 0x3c0101ee  lui         $at, 0x1EE
    ctx->pc = 0x262218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)494 << 16));
    // 0x26221c: 0xac200274  sw          $zero, 0x274($at)
    ctx->pc = 0x26221cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 628), GPR_U32(ctx, 0));
    // 0x262220: 0xc0a0e30  jal         func_2838C0
    ctx->pc = 0x262220u;
    SET_GPR_U32(ctx, 31, 0x262228u);
    ctx->pc = 0x262224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262220u;
            // 0x262224: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262228u; }
        if (ctx->pc != 0x262228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262228u; }
        if (ctx->pc != 0x262228u) { return; }
    }
    ctx->pc = 0x262228u;
label_262228:
    // 0x262228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262228u;
    {
        const bool branch_taken_0x262228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262228) {
            ctx->pc = 0x262238u;
            goto label_262238;
        }
    }
    ctx->pc = 0x262230u;
    // 0x262230: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x262230u;
    {
        const bool branch_taken_0x262230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x262230u;
            // 0x262234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262230) {
            ctx->pc = 0x262340u;
            goto label_262340;
        }
    }
    ctx->pc = 0x262238u;
label_262238:
    // 0x262238: 0x8f8397f4  lw          $v1, -0x680C($gp)
    ctx->pc = 0x262238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940660)));
    // 0x26223c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26223Cu;
    {
        const bool branch_taken_0x26223c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26223c) {
            ctx->pc = 0x262250u;
            goto label_262250;
        }
    }
    ctx->pc = 0x262244u;
    // 0x262244: 0xc0975f8  jal         func_25D7E0
    ctx->pc = 0x262244u;
    SET_GPR_U32(ctx, 31, 0x26224Cu);
    ctx->pc = 0x262248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262244u;
            // 0x262248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25D7E0u;
    if (runtime->hasFunction(0x25D7E0u)) {
        auto targetFn = runtime->lookupFunction(0x25D7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26224Cu; }
        if (ctx->pc != 0x26224Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCamWorldCoord__FP9mgCCamera_0x25d7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26224Cu; }
        if (ctx->pc != 0x26224Cu) { return; }
    }
    ctx->pc = 0x26224Cu;
label_26224c:
    // 0x26224c: 0xaf8097f4  sw          $zero, -0x680C($gp)
    ctx->pc = 0x26224cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
label_262250:
    // 0x262250: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x262250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x262254: 0xc0a4280  jal         func_290A00
    ctx->pc = 0x262254u;
    SET_GPR_U32(ctx, 31, 0x26225Cu);
    ctx->pc = 0x262258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262254u;
            // 0x262258: 0x2484ea80  addiu       $a0, $a0, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A00u;
    if (runtime->hasFunction(0x290A00u)) {
        auto targetFn = runtime->lookupFunction(0x290A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26225Cu; }
        if (ctx->pc != 0x26225Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__18CEventSpriteMotherFv_0x290a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26225Cu; }
        if (ctx->pc != 0x26225Cu) { return; }
    }
    ctx->pc = 0x26225Cu;
label_26225c:
    // 0x26225c: 0xc0a4088  jal         func_290220
    ctx->pc = 0x26225Cu;
    SET_GPR_U32(ctx, 31, 0x262264u);
    ctx->pc = 0x262260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26225Cu;
            // 0x262260: 0x278497e4  addiu       $a0, $gp, -0x681C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940644));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290220u;
    if (runtime->hasFunction(0x290220u)) {
        auto targetFn = runtime->lookupFunction(0x290220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262264u; }
        if (ctx->pc != 0x262264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__7CMarkerFv_0x290220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262264u; }
        if (ctx->pc != 0x262264u) { return; }
    }
    ctx->pc = 0x262264u;
label_262264:
    // 0x262264: 0xaf8097f0  sw          $zero, -0x6810($gp)
    ctx->pc = 0x262264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940656), GPR_U32(ctx, 0));
    // 0x262268: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x262268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26226c: 0xaf8097f4  sw          $zero, -0x680C($gp)
    ctx->pc = 0x26226cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940660), GPR_U32(ctx, 0));
    // 0x262270: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x262270u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262274:
    // 0x262274: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x262274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
    // 0x262278: 0x24421230  addiu       $v0, $v0, 0x1230
    ctx->pc = 0x262278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4656));
    // 0x26227c: 0xc0a42a4  jal         func_290A90
    ctx->pc = 0x26227Cu;
    SET_GPR_U32(ctx, 31, 0x262284u);
    ctx->pc = 0x262280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26227Cu;
            // 0x262280: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290A90u;
    if (runtime->hasFunction(0x290A90u)) {
        auto targetFn = runtime->lookupFunction(0x290A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262284u; }
        if (ctx->pc != 0x262284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CEventSprite2Fv_0x290a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262284u; }
        if (ctx->pc != 0x262284u) { return; }
    }
    ctx->pc = 0x262284u;
label_262284:
    // 0x262284: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x262284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x262288: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x262288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x26228c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x26228Cu;
    {
        const bool branch_taken_0x26228c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26228Cu;
            // 0x262290: 0x26310080  addiu       $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26228c) {
            ctx->pc = 0x262274u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_262274;
        }
    }
    ctx->pc = 0x262294u;
    // 0x262294: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x262294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262298: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x262298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x26229c: 0x24840290  addiu       $a0, $a0, 0x290
    ctx->pc = 0x26229cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 656));
    // 0x2622a0: 0xaf8297f8  sw          $v0, -0x6808($gp)
    ctx->pc = 0x2622a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940664), GPR_U32(ctx, 2));
    // 0x2622a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2622a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2622a8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2622A8u;
    SET_GPR_U32(ctx, 31, 0x2622B0u);
    ctx->pc = 0x2622ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622A8u;
            // 0x2622ac: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622B0u; }
        if (ctx->pc != 0x2622B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622B0u; }
        if (ctx->pc != 0x2622B0u) { return; }
    }
    ctx->pc = 0x2622B0u;
label_2622b0:
    // 0x2622b0: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2622b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2622b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2622b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2622b8: 0x248402d0  addiu       $a0, $a0, 0x2D0
    ctx->pc = 0x2622b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 720));
    // 0x2622bc: 0xc049c86  jal         func_127218
    ctx->pc = 0x2622BCu;
    SET_GPR_U32(ctx, 31, 0x2622C4u);
    ctx->pc = 0x2622C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622BCu;
            // 0x2622c0: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622C4u; }
        if (ctx->pc != 0x2622C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622C4u; }
        if (ctx->pc != 0x2622C4u) { return; }
    }
    ctx->pc = 0x2622C4u;
label_2622c4:
    // 0x2622c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2622c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2622c8: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2622c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2622cc: 0x24840310  addiu       $a0, $a0, 0x310
    ctx->pc = 0x2622ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 784));
    // 0x2622d0: 0xaf8297fc  sw          $v0, -0x6804($gp)
    ctx->pc = 0x2622d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940668), GPR_U32(ctx, 2));
    // 0x2622d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2622d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2622d8: 0xc049c86  jal         func_127218
    ctx->pc = 0x2622D8u;
    SET_GPR_U32(ctx, 31, 0x2622E0u);
    ctx->pc = 0x2622DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622D8u;
            // 0x2622dc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622E0u; }
        if (ctx->pc != 0x2622E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622E0u; }
        if (ctx->pc != 0x2622E0u) { return; }
    }
    ctx->pc = 0x2622E0u;
label_2622e0:
    // 0x2622e0: 0x3c0401ee  lui         $a0, 0x1EE
    ctx->pc = 0x2622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)494 << 16));
    // 0x2622e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2622e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2622e8: 0x24840350  addiu       $a0, $a0, 0x350
    ctx->pc = 0x2622e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 848));
    // 0x2622ec: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2622ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2622f0: 0xc049c86  jal         func_127218
    ctx->pc = 0x2622F0u;
    SET_GPR_U32(ctx, 31, 0x2622F8u);
    ctx->pc = 0x2622F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622F0u;
            // 0x2622f4: 0xaf809800  sw          $zero, -0x6800($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622F8u; }
        if (ctx->pc != 0x2622F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2622F8u; }
        if (ctx->pc != 0x2622F8u) { return; }
    }
    ctx->pc = 0x2622F8u;
label_2622f8:
    // 0x2622f8: 0xc0983dc  jal         func_260F70
    ctx->pc = 0x2622F8u;
    SET_GPR_U32(ctx, 31, 0x262300u);
    ctx->pc = 0x2622FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2622F8u;
            // 0x2622fc: 0xaf809804  sw          $zero, -0x67FC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260F70u;
    if (runtime->hasFunction(0x260F70u)) {
        auto targetFn = runtime->lookupFunction(0x260F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262300u; }
        if (ctx->pc != 0x262300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitWorldCoord__Fv_0x260f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x262300u; }
        if (ctx->pc != 0x262300u) { return; }
    }
    ctx->pc = 0x262300u;
label_262300:
    // 0x262300: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262304: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x262304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
    // 0x262308: 0xac20e504  sw          $zero, -0x1AFC($at)
    ctx->pc = 0x262308u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 0));
    // 0x26230c: 0x24842a40  addiu       $a0, $a0, 0x2A40
    ctx->pc = 0x26230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10816));
    // 0x262310: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x262310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x262314: 0xac20e624  sw          $zero, -0x19DC($at)
    ctx->pc = 0x262314u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960676), GPR_U32(ctx, 0));
    // 0x262318: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x262318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26231c: 0xac202a30  sw          $zero, 0x2A30($at)
    ctx->pc = 0x26231cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10800), GPR_U32(ctx, 0));
    // 0x262320: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x262320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x262324: 0xac202a34  sw          $zero, 0x2A34($at)
    ctx->pc = 0x262324u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10804), GPR_U32(ctx, 0));
    // 0x262328: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x262328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x26232c: 0xac202a38  sw          $zero, 0x2A38($at)
    ctx->pc = 0x26232cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 10808), GPR_U32(ctx, 0));
    // 0x262330: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x262330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
    // 0x262334: 0xc098178  jal         func_2605E0
    ctx->pc = 0x262334u;
    SET_GPR_U32(ctx, 31, 0x26233Cu);
    ctx->pc = 0x262338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x262334u;
            // 0x262338: 0xac202a3c  sw          $zero, 0x2A3C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 10812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2605E0u;
    if (runtime->hasFunction(0x2605E0u)) {
        auto targetFn = runtime->lookupFunction(0x2605E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26233Cu; }
        if (ctx->pc != 0x26233Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CScreenEffectFv_0x2605e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26233Cu; }
        if (ctx->pc != 0x26233Cu) { return; }
    }
    ctx->pc = 0x26233Cu;
label_26233c:
    // 0x26233c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26233cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262340:
    // 0x262340: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x262340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x262344: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x262344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x262348: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x262348u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26234c: 0x3e00008  jr          $ra
    ctx->pc = 0x26234Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26234Cu;
            // 0x262350: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x262354u;
}
