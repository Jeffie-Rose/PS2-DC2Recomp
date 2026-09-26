#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __as__16CMapLightingInfoFRC16CMapLightingInfo
// Address: 0x161640 - 0x16175c
void ps2___as__16CMapLightingInfoFRC16CMapLightingInfo_0x161640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___as__16CMapLightingInfoFRC16CMapLightingInfo_0x161640");
#endif

    switch (ctx->pc) {
        case 0x161694u: goto label_161694;
        case 0x1616c0u: goto label_1616c0;
        case 0x1616f4u: goto label_1616f4;
        default: break;
    }

    ctx->pc = 0x161640u;

    // 0x161640: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x161640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161644: 0x24a80030  addiu       $t0, $a1, 0x30
    ctx->pc = 0x161644u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x161648: 0x24870030  addiu       $a3, $a0, 0x30
    ctx->pc = 0x161648u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x16164c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x16164cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x161650: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x161650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x161654: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x161654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161658: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x161658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16165c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x16165cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161660: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x161660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161664: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x161664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x161668: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x161668u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x16166c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x16166cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x161670: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x161670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x161674: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x161674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161678: 0xc4a20024  lwc1        $f2, 0x24($a1)
    ctx->pc = 0x161678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16167c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x16167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161680: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x161680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161684: 0xe4830020  swc1        $f3, 0x20($a0)
    ctx->pc = 0x161684u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x161688: 0xe4820024  swc1        $f2, 0x24($a0)
    ctx->pc = 0x161688u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x16168c: 0xe4810028  swc1        $f1, 0x28($a0)
    ctx->pc = 0x16168cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x161690: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x161690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_161694:
    // 0x161694: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x161694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x161698: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x161698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x16169c: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x16169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1616a0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1616a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1616a4: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1616a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1616a8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1616a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1616ac: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1616ACu;
    {
        const bool branch_taken_0x1616ac = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1616B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616ACu;
            // 0x1616b0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616ac) {
            ctx->pc = 0x161694u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_161694;
        }
    }
    ctx->pc = 0x1616B4u;
    // 0x1616b4: 0x24a80070  addiu       $t0, $a1, 0x70
    ctx->pc = 0x1616b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x1616b8: 0x24870070  addiu       $a3, $a0, 0x70
    ctx->pc = 0x1616b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1616bc: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1616bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1616c0:
    // 0x1616c0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x1616c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1616c4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1616c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1616c8: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x1616c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1616cc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1616ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1616d0: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1616d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1616d4: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1616d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1616d8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1616D8u;
    {
        const bool branch_taken_0x1616d8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1616DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1616D8u;
            // 0x1616dc: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1616d8) {
            ctx->pc = 0x1616C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1616c0;
        }
    }
    ctx->pc = 0x1616E0u;
    // 0x1616e0: 0x8ca200b0  lw          $v0, 0xB0($a1)
    ctx->pc = 0x1616e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x1616e4: 0x24a800c0  addiu       $t0, $a1, 0xC0
    ctx->pc = 0x1616e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 192));
    // 0x1616e8: 0x248700c0  addiu       $a3, $a0, 0xC0
    ctx->pc = 0x1616e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1616ec: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1616ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1616f0: 0xac8200b0  sw          $v0, 0xB0($a0)
    ctx->pc = 0x1616f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 2));
label_1616f4:
    // 0x1616f4: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x1616f4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1616f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1616f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1616fc: 0x79020010  lq          $v0, 0x10($t0)
    ctx->pc = 0x1616fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x161700: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x161700u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x161704: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x161704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x161708: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x161708u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
    // 0x16170c: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x16170Cu;
    {
        const bool branch_taken_0x16170c = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x161710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16170Cu;
            // 0x161710: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16170c) {
            ctx->pc = 0x1616F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1616f4;
        }
    }
    ctx->pc = 0x161714u;
    // 0x161714: 0xc4a30180  lwc1        $f3, 0x180($a1)
    ctx->pc = 0x161714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x161718: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x161718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16171c: 0xc4a20184  lwc1        $f2, 0x184($a1)
    ctx->pc = 0x16171cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x161720: 0xc4a10188  lwc1        $f1, 0x188($a1)
    ctx->pc = 0x161720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x161724: 0xc4a0018c  lwc1        $f0, 0x18C($a1)
    ctx->pc = 0x161724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x161728: 0xe4830180  swc1        $f3, 0x180($a0)
    ctx->pc = 0x161728u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 384), bits); }
    // 0x16172c: 0xe4820184  swc1        $f2, 0x184($a0)
    ctx->pc = 0x16172cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 388), bits); }
    // 0x161730: 0xe4810188  swc1        $f1, 0x188($a0)
    ctx->pc = 0x161730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 392), bits); }
    // 0x161734: 0xe480018c  swc1        $f0, 0x18C($a0)
    ctx->pc = 0x161734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 396), bits); }
    // 0x161738: 0x8ca30190  lw          $v1, 0x190($a1)
    ctx->pc = 0x161738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 400)));
    // 0x16173c: 0xac830190  sw          $v1, 0x190($a0)
    ctx->pc = 0x16173cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 400), GPR_U32(ctx, 3));
    // 0x161740: 0x78a701a0  lq          $a3, 0x1A0($a1)
    ctx->pc = 0x161740u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 5), 416)));
    // 0x161744: 0x78a601b0  lq          $a2, 0x1B0($a1)
    ctx->pc = 0x161744u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 432)));
    // 0x161748: 0x78a301c0  lq          $v1, 0x1C0($a1)
    ctx->pc = 0x161748u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 448)));
    // 0x16174c: 0x7c8701a0  sq          $a3, 0x1A0($a0)
    ctx->pc = 0x16174cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 416), GPR_VEC(ctx, 7));
    // 0x161750: 0x7c8601b0  sq          $a2, 0x1B0($a0)
    ctx->pc = 0x161750u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 432), GPR_VEC(ctx, 6));
    // 0x161754: 0x3e00008  jr          $ra
    ctx->pc = 0x161754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161754u;
            // 0x161758: 0x7c8301c0  sq          $v1, 0x1C0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 448), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16175Cu;
}
