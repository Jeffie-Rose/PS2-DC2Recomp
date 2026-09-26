#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EdEventInfoCommandInitialize__Fv
// Address: 0x2611f0 - 0x2612fc
void EdEventInfoCommandInitialize__Fv_0x2611f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EdEventInfoCommandInitialize__Fv_0x2611f0");
#endif

    switch (ctx->pc) {
        case 0x261278u: goto label_261278;
        default: break;
    }

    ctx->pc = 0x2611f0u;

    // 0x2611f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2611f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2611f4: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x2611f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2611f8: 0xac20e4fc  sw          $zero, -0x1B04($at)
    ctx->pc = 0x2611f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960380), GPR_U32(ctx, 0));
    // 0x2611fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2611fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261200: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261204: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x261204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261208: 0xac20e500  sw          $zero, -0x1B00($at)
    ctx->pc = 0x261208u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960384), GPR_U32(ctx, 0));
    // 0x26120c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261210: 0xac23e508  sw          $v1, -0x1AF8($at)
    ctx->pc = 0x261210u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960392), GPR_U32(ctx, 3));
    // 0x261214: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x261214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x261218: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26121c: 0xac23e55c  sw          $v1, -0x1AA4($at)
    ctx->pc = 0x26121cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960476), GPR_U32(ctx, 3));
    // 0x261220: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261224: 0xac20e504  sw          $zero, -0x1AFC($at)
    ctx->pc = 0x261224u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960388), GPR_U32(ctx, 0));
    // 0x261228: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26122c: 0xac20e510  sw          $zero, -0x1AF0($at)
    ctx->pc = 0x26122cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960400), GPR_U32(ctx, 0));
    // 0x261230: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261234: 0xac20e514  sw          $zero, -0x1AEC($at)
    ctx->pc = 0x261234u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960404), GPR_U32(ctx, 0));
    // 0x261238: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26123c: 0xac20e518  sw          $zero, -0x1AE8($at)
    ctx->pc = 0x26123cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960408), GPR_U32(ctx, 0));
    // 0x261240: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261244: 0xac20e51c  sw          $zero, -0x1AE4($at)
    ctx->pc = 0x261244u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960412), GPR_U32(ctx, 0));
    // 0x261248: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26124c: 0xac20e520  sw          $zero, -0x1AE0($at)
    ctx->pc = 0x26124cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960416), GPR_U32(ctx, 0));
    // 0x261250: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261254: 0xac20e558  sw          $zero, -0x1AA8($at)
    ctx->pc = 0x261254u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960472), GPR_U32(ctx, 0));
    // 0x261258: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26125c: 0xac20e560  sw          $zero, -0x1AA0($at)
    ctx->pc = 0x26125cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960480), GPR_U32(ctx, 0));
    // 0x261260: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x261264: 0xac20e564  sw          $zero, -0x1A9C($at)
    ctx->pc = 0x261264u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960484), GPR_U32(ctx, 0));
    // 0x261268: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x261268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x26126c: 0xac20e568  sw          $zero, -0x1A98($at)
    ctx->pc = 0x26126cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960488), GPR_U32(ctx, 0));
    // 0x261270: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x261270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x261274: 0x2484e430  addiu       $a0, $a0, -0x1BD0
    ctx->pc = 0x261274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960176));
label_261278:
    // 0x261278: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x26127c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x26127cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x261280: 0xace0013c  sw          $zero, 0x13C($a3)
    ctx->pc = 0x261280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 316), GPR_U32(ctx, 0));
    // 0x261284: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x261284u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x261288: 0xace0017c  sw          $zero, 0x17C($a3)
    ctx->pc = 0x261288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 380), GPR_U32(ctx, 0));
    // 0x26128c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x26128cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x261290: 0xace00140  sw          $zero, 0x140($a3)
    ctx->pc = 0x261290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 320), GPR_U32(ctx, 0));
    // 0x261294: 0xace00180  sw          $zero, 0x180($a3)
    ctx->pc = 0x261294u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 384), GPR_U32(ctx, 0));
    // 0x261298: 0xace00144  sw          $zero, 0x144($a3)
    ctx->pc = 0x261298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 324), GPR_U32(ctx, 0));
    // 0x26129c: 0xace00184  sw          $zero, 0x184($a3)
    ctx->pc = 0x26129cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 388), GPR_U32(ctx, 0));
    // 0x2612a0: 0xace00148  sw          $zero, 0x148($a3)
    ctx->pc = 0x2612a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 328), GPR_U32(ctx, 0));
    // 0x2612a4: 0xace00188  sw          $zero, 0x188($a3)
    ctx->pc = 0x2612a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 392), GPR_U32(ctx, 0));
    // 0x2612a8: 0xace0014c  sw          $zero, 0x14C($a3)
    ctx->pc = 0x2612a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 332), GPR_U32(ctx, 0));
    // 0x2612ac: 0xace0018c  sw          $zero, 0x18C($a3)
    ctx->pc = 0x2612acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 396), GPR_U32(ctx, 0));
    // 0x2612b0: 0xace00150  sw          $zero, 0x150($a3)
    ctx->pc = 0x2612b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 336), GPR_U32(ctx, 0));
    // 0x2612b4: 0xace00190  sw          $zero, 0x190($a3)
    ctx->pc = 0x2612b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 400), GPR_U32(ctx, 0));
    // 0x2612b8: 0xace00154  sw          $zero, 0x154($a3)
    ctx->pc = 0x2612b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 340), GPR_U32(ctx, 0));
    // 0x2612bc: 0xace00194  sw          $zero, 0x194($a3)
    ctx->pc = 0x2612bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 404), GPR_U32(ctx, 0));
    // 0x2612c0: 0xace00158  sw          $zero, 0x158($a3)
    ctx->pc = 0x2612c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 344), GPR_U32(ctx, 0));
    // 0x2612c4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2612C4u;
    {
        const bool branch_taken_0x2612c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2612C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2612C4u;
            // 0x2612c8: 0xace00198  sw          $zero, 0x198($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612c4) {
            ctx->pc = 0x261278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261278;
        }
    }
    ctx->pc = 0x2612CCu;
    // 0x2612cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2612ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2612d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2612d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2612d4: 0xac20e5f8  sw          $zero, -0x1A08($at)
    ctx->pc = 0x2612d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960632), GPR_U32(ctx, 0));
    // 0x2612d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2612d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2612dc: 0xac23e628  sw          $v1, -0x19D8($at)
    ctx->pc = 0x2612dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960680), GPR_U32(ctx, 3));
    // 0x2612e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2612e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2612e4: 0xac20e5fc  sw          $zero, -0x1A04($at)
    ctx->pc = 0x2612e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960636), GPR_U32(ctx, 0));
    // 0x2612e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2612e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2612ec: 0xac20e624  sw          $zero, -0x19DC($at)
    ctx->pc = 0x2612ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294960676), GPR_U32(ctx, 0));
    // 0x2612f0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2612f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x2612f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2612F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2612F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2612F4u;
            // 0x2612f8: 0xac20e62c  sw          $zero, -0x19D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294960684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2612FCu;
}
