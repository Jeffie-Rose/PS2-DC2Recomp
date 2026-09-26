#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgGetFrameBackBuffer__FP10mgCTexture
// Address: 0x144400 - 0x144538
void mgGetFrameBackBuffer__FP10mgCTexture_0x144400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgGetFrameBackBuffer__FP10mgCTexture_0x144400");
#endif

    switch (ctx->pc) {
        case 0x14445cu: goto label_14445c;
        default: break;
    }

    ctx->pc = 0x144400u;

    // 0x144400: 0x8f838818  lw          $v1, -0x77E8($gp)
    ctx->pc = 0x144400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x144404: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x144404u;
    {
        const bool branch_taken_0x144404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144404u;
            // 0x144408: 0x3c090038  lui         $t1, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144404) {
            ctx->pc = 0x144418u;
            goto label_144418;
        }
    }
    ctx->pc = 0x14440Cu;
    // 0x14440c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x14440cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x144410: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x144410u;
    {
        const bool branch_taken_0x144410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144410u;
            // 0x144414: 0x252922b0  addiu       $t1, $t1, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8880));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144410) {
            ctx->pc = 0x14441Cu;
            goto label_14441c;
        }
    }
    ctx->pc = 0x144418u;
label_144418:
    // 0x144418: 0x252921c0  addiu       $t1, $t1, 0x21C0
    ctx->pc = 0x144418u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8640));
label_14441c:
    // 0x14441c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14441cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144420: 0x3c080038  lui         $t0, 0x38
    ctx->pc = 0x144420u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)56 << 16));
    // 0x144424: 0x84232490  lh          $v1, 0x2490($at)
    ctx->pc = 0x144424u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9360)));
    // 0x144428: 0x25082498  addiu       $t0, $t0, 0x2498
    ctx->pc = 0x144428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9368));
    // 0x14442c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x14442cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x144430: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x144430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x144434: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x144434u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x144438: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14443c: 0x84232492  lh          $v1, 0x2492($at)
    ctx->pc = 0x14443cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9362)));
    // 0x144440: 0xa4830002  sh          $v1, 0x2($a0)
    ctx->pc = 0x144440u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x144444: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144444u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144448: 0x84232494  lh          $v1, 0x2494($at)
    ctx->pc = 0x144448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9364)));
    // 0x14444c: 0xa4830004  sh          $v1, 0x4($a0)
    ctx->pc = 0x14444cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x144450: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144454: 0x84232496  lh          $v1, 0x2496($at)
    ctx->pc = 0x144454u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 9366)));
    // 0x144458: 0xa4830006  sh          $v1, 0x6($a0)
    ctx->pc = 0x144458u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 3));
label_14445c:
    // 0x14445c: 0x81050000  lb          $a1, 0x0($t0)
    ctx->pc = 0x14445cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x144460: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x144460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144464: 0x81030001  lb          $v1, 0x1($t0)
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x144468: 0xa0e50000  sb          $a1, 0x0($a3)
    ctx->pc = 0x144468u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x14446c: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x14446cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x144470: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x144470u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x144474: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x144474u;
    {
        const bool branch_taken_0x144474 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x144478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144474u;
            // 0x144478: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144474) {
            ctx->pc = 0x14445Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14445c;
        }
    }
    ctx->pc = 0x14447Cu;
    // 0x14447c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x14447cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144480: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x144484: 0x8c2624b8  lw          $a2, 0x24B8($at)
    ctx->pc = 0x144484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9400)));
    // 0x144488: 0x24a524e0  addiu       $a1, $a1, 0x24E0
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9440));
    // 0x14448c: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x14448cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x144490: 0xac860028  sw          $a2, 0x28($a0)
    ctx->pc = 0x144490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 6));
    // 0x144494: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144498: 0x8c2624bc  lw          $a2, 0x24BC($at)
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9404)));
    // 0x14449c: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x14449cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x1444a0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1444a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1444a4: 0x8c2624c0  lw          $a2, 0x24C0($at)
    ctx->pc = 0x1444a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9408)));
    // 0x1444a8: 0xac860030  sw          $a2, 0x30($a0)
    ctx->pc = 0x1444a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 6));
    // 0x1444ac: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1444acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1444b0: 0xdc2624c8  ld          $a2, 0x24C8($at)
    ctx->pc = 0x1444b0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 9416)));
    // 0x1444b4: 0xfc860038  sd          $a2, 0x38($a0)
    ctx->pc = 0x1444b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
    // 0x1444b8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1444bc: 0xdc2624d0  ld          $a2, 0x24D0($at)
    ctx->pc = 0x1444bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 9424)));
    // 0x1444c0: 0xfc860040  sd          $a2, 0x40($a0)
    ctx->pc = 0x1444c0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 6));
    // 0x1444c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1444c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1444c8: 0xdc2624d8  ld          $a2, 0x24D8($at)
    ctx->pc = 0x1444c8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 1), 9432)));
    // 0x1444cc: 0xfc860048  sd          $a2, 0x48($a0)
    ctx->pc = 0x1444ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 6));
    // 0x1444d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1444d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x1444d4: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1444d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1444d8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1444d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1444dc: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1444dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1444e0: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1444e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1444e4: 0xe4830050  swc1        $f3, 0x50($a0)
    ctx->pc = 0x1444e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x1444e8: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x1444e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1444ec: 0xe4810058  swc1        $f1, 0x58($a0)
    ctx->pc = 0x1444ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1444f0: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x1444f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x1444f4: 0x8c2524f0  lw          $a1, 0x24F0($at)
    ctx->pc = 0x1444f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9456)));
    // 0x1444f8: 0xac850060  sw          $a1, 0x60($a0)
    ctx->pc = 0x1444f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 5));
    // 0x1444fc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x1444fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x144500: 0x8c2524f4  lw          $a1, 0x24F4($at)
    ctx->pc = 0x144500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9460)));
    // 0x144504: 0xac850064  sw          $a1, 0x64($a0)
    ctx->pc = 0x144504u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 5));
    // 0x144508: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x144508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x14450c: 0x8c2524f8  lw          $a1, 0x24F8($at)
    ctx->pc = 0x14450cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9464)));
    // 0x144510: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x144510u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
    // 0x144514: 0x95260000  lhu         $a2, 0x0($t1)
    ctx->pc = 0x144514u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x144518: 0x94850038  lhu         $a1, 0x38($a0)
    ctx->pc = 0x144518u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x14451c: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x14451cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x144520: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x144520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x144524: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x144528: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    // 0x14452c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14452cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x144530: 0x3e00008  jr          $ra
    ctx->pc = 0x144530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144530u;
            // 0x144534: 0xa4830038  sh          $v1, 0x38($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 56), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x144538u;
}
