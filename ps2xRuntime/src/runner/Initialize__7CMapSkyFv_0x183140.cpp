#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__7CMapSkyFv
// Address: 0x183140 - 0x1831e8
void Initialize__7CMapSkyFv_0x183140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__7CMapSkyFv_0x183140");
#endif

    switch (ctx->pc) {
        case 0x18314cu: goto label_18314c;
        case 0x183188u: goto label_183188;
        default: break;
    }

    ctx->pc = 0x183140u;

    // 0x183140: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183144: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x183144u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183148: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x183148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18314c:
    // 0x18314c: 0x874021  addu        $t0, $a0, $a3
    ctx->pc = 0x18314cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x183150: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x183150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x183154: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x183154u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x183158: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x183158u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18315c: 0xad000030  sw          $zero, 0x30($t0)
    ctx->pc = 0x18315cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 48), GPR_U32(ctx, 0));
    // 0x183160: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x183160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x183164: 0xad000060  sw          $zero, 0x60($t0)
    ctx->pc = 0x183164u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 96), GPR_U32(ctx, 0));
    // 0x183168: 0xad000040  sw          $zero, 0x40($t0)
    ctx->pc = 0x183168u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 64), GPR_U32(ctx, 0));
    // 0x18316c: 0xad000010  sw          $zero, 0x10($t0)
    ctx->pc = 0x18316cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 0));
    // 0x183170: 0xad000050  sw          $zero, 0x50($t0)
    ctx->pc = 0x183170u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 80), GPR_U32(ctx, 0));
    // 0x183174: 0xad000020  sw          $zero, 0x20($t0)
    ctx->pc = 0x183174u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 32), GPR_U32(ctx, 0));
    // 0x183178: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x183178u;
    {
        const bool branch_taken_0x183178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18317Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183178u;
            // 0x18317c: 0xad050070  sw          $a1, 0x70($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183178) {
            ctx->pc = 0x18314Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18314c;
        }
    }
    ctx->pc = 0x183180u;
    // 0x183180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_183188:
    // 0x183188: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x183188u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18318c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x18318cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x183190: 0xace00088  sw          $zero, 0x88($a3)
    ctx->pc = 0x183190u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 136), GPR_U32(ctx, 0));
    // 0x183194: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x183194u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x183198: 0xace0008c  sw          $zero, 0x8C($a3)
    ctx->pc = 0x183198u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 140), GPR_U32(ctx, 0));
    // 0x18319c: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x18319cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x1831a0: 0xace00090  sw          $zero, 0x90($a3)
    ctx->pc = 0x1831a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 0));
    // 0x1831a4: 0xace00094  sw          $zero, 0x94($a3)
    ctx->pc = 0x1831a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 148), GPR_U32(ctx, 0));
    // 0x1831a8: 0xace00098  sw          $zero, 0x98($a3)
    ctx->pc = 0x1831a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 152), GPR_U32(ctx, 0));
    // 0x1831ac: 0xace0009c  sw          $zero, 0x9C($a3)
    ctx->pc = 0x1831acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 156), GPR_U32(ctx, 0));
    // 0x1831b0: 0xace000a0  sw          $zero, 0xA0($a3)
    ctx->pc = 0x1831b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 160), GPR_U32(ctx, 0));
    // 0x1831b4: 0xace000a4  sw          $zero, 0xA4($a3)
    ctx->pc = 0x1831b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 164), GPR_U32(ctx, 0));
    // 0x1831b8: 0xace000a8  sw          $zero, 0xA8($a3)
    ctx->pc = 0x1831b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 168), GPR_U32(ctx, 0));
    // 0x1831bc: 0xace000ac  sw          $zero, 0xAC($a3)
    ctx->pc = 0x1831bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 172), GPR_U32(ctx, 0));
    // 0x1831c0: 0xace000b0  sw          $zero, 0xB0($a3)
    ctx->pc = 0x1831c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 176), GPR_U32(ctx, 0));
    // 0x1831c4: 0xace000b4  sw          $zero, 0xB4($a3)
    ctx->pc = 0x1831c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 180), GPR_U32(ctx, 0));
    // 0x1831c8: 0xace000b8  sw          $zero, 0xB8($a3)
    ctx->pc = 0x1831c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 184), GPR_U32(ctx, 0));
    // 0x1831cc: 0xace000bc  sw          $zero, 0xBC($a3)
    ctx->pc = 0x1831ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 188), GPR_U32(ctx, 0));
    // 0x1831d0: 0xace000c0  sw          $zero, 0xC0($a3)
    ctx->pc = 0x1831d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 192), GPR_U32(ctx, 0));
    // 0x1831d4: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1831D4u;
    {
        const bool branch_taken_0x1831d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1831D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1831D4u;
            // 0x1831d8: 0xace000c4  sw          $zero, 0xC4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1831d4) {
            ctx->pc = 0x183188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_183188;
        }
    }
    ctx->pc = 0x1831DCu;
    // 0x1831dc: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1831dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x1831e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1831E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1831E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1831E0u;
            // 0x1831e4: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1831E8u;
}
