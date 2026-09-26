#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ActiveLighting__13mgRENDER_INFOFii
// Address: 0x139120 - 0x139250
void ActiveLighting__13mgRENDER_INFOFii_0x139120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ActiveLighting__13mgRENDER_INFOFii_0x139120");
#endif

    switch (ctx->pc) {
        case 0x1391a8u: goto label_1391a8;
        case 0x1391d8u: goto label_1391d8;
        case 0x139228u: goto label_139228;
        default: break;
    }

    ctx->pc = 0x139120u;

    // 0x139120: 0x8c8203f4  lw          $v0, 0x3F4($a0)
    ctx->pc = 0x139120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1012)));
    // 0x139124: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139124u;
    {
        const bool branch_taken_0x139124 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x139124) {
            ctx->pc = 0x139134u;
            goto label_139134;
        }
    }
    ctx->pc = 0x13912Cu;
    // 0x13912c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x13912Cu;
    {
        const bool branch_taken_0x13912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13912Cu;
            // 0x139130: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13912c) {
            ctx->pc = 0x139248u;
            goto label_139248;
        }
    }
    ctx->pc = 0x139134u;
label_139134:
    // 0x139134: 0x4a00044  bltz        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x139134u;
    {
        const bool branch_taken_0x139134 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x139134) {
            ctx->pc = 0x139248u;
            goto label_139248;
        }
    }
    ctx->pc = 0x13913Cu;
    // 0x13913c: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x13913cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x139140: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x139140u;
    {
        const bool branch_taken_0x139140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x139140) {
            ctx->pc = 0x139150u;
            goto label_139150;
        }
    }
    ctx->pc = 0x139148u;
    // 0x139148: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x139148u;
    {
        const bool branch_taken_0x139148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x139148) {
            ctx->pc = 0x139248u;
            goto label_139248;
        }
    }
    ctx->pc = 0x139150u;
label_139150:
    // 0x139150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139154: 0xac8203f0  sw          $v0, 0x3F0($a0)
    ctx->pc = 0x139154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1008), GPR_U32(ctx, 2));
    // 0x139158: 0x8c8203f4  lw          $v0, 0x3F4($a0)
    ctx->pc = 0x139158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1012)));
    // 0x13915c: 0x10c0003a  beqz        $a2, . + 4 + (0x3A << 2)
    ctx->pc = 0x13915Cu;
    {
        const bool branch_taken_0x13915c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x139160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13915Cu;
            // 0x139160: 0xac8503f4  sw          $a1, 0x3F4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1012), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13915c) {
            ctx->pc = 0x139248u;
            goto label_139248;
        }
    }
    ctx->pc = 0x139164u;
    // 0x139164: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x139164u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x139168: 0x8c8703f4  lw          $a3, 0x3F4($a0)
    ctx->pc = 0x139168u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1012)));
    // 0x13916c: 0x622823  subu        $a1, $v1, $v0
    ctx->pc = 0x13916cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139170: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x139170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x139174: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x139174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x139178: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x139178u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13917c: 0x35100  sll         $t2, $v1, 4
    ctx->pc = 0x13917cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x139180: 0x1441821  addu        $v1, $t2, $a0
    ctx->pc = 0x139180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x139184: 0x24680400  addiu       $t0, $v1, 0x400
    ctx->pc = 0x139184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x139188: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x139188u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13918c: 0x672823  subu        $a1, $v1, $a3
    ctx->pc = 0x13918cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x139190: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x139190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x139194: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x139194u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139198: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x139198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x13919c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x13919cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1391a0: 0x24690400  addiu       $t1, $v1, 0x400
    ctx->pc = 0x1391a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
    // 0x1391a4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x1391a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1391a8:
    // 0x1391a8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1391ac: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1391b0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1391b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1391b4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1391b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1391b8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1391b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1391bc: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1391bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1391c0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1391C0u;
    {
        const bool branch_taken_0x1391c0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1391C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391C0u;
            // 0x1391c4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391c0) {
            ctx->pc = 0x1391A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1391a8;
        }
    }
    ctx->pc = 0x1391C8u;
    // 0x1391c8: 0x1441821  addu        $v1, $t2, $a0
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1391cc: 0x25270040  addiu       $a3, $t1, 0x40
    ctx->pc = 0x1391ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x1391d0: 0x24680440  addiu       $t0, $v1, 0x440
    ctx->pc = 0x1391d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
    // 0x1391d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1391d8:
    // 0x1391d8: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x1391d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1391dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1391e0: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x1391e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x1391e4: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1391e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x1391e8: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x1391e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x1391ec: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x1391ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
    // 0x1391f0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1391F0u;
    {
        const bool branch_taken_0x1391f0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x1391F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391F0u;
            // 0x1391f4: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391f0) {
            ctx->pc = 0x1391D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1391d8;
        }
    }
    ctx->pc = 0x1391F8u;
    // 0x1391f8: 0x1441821  addu        $v1, $t2, $a0
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1391fc: 0x25260090  addiu       $a2, $t1, 0x90
    ctx->pc = 0x1391fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 144));
    // 0x139200: 0xc4630480  lwc1        $f3, 0x480($v1)
    ctx->pc = 0x139200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x139204: 0x24670490  addiu       $a3, $v1, 0x490
    ctx->pc = 0x139204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x139208: 0xc4620484  lwc1        $f2, 0x484($v1)
    ctx->pc = 0x139208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13920c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13920cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x139210: 0xc4610488  lwc1        $f1, 0x488($v1)
    ctx->pc = 0x139210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139214: 0xc460048c  lwc1        $f0, 0x48C($v1)
    ctx->pc = 0x139214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139218: 0xe5230080  swc1        $f3, 0x80($t1)
    ctx->pc = 0x139218u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 128), bits); }
    // 0x13921c: 0xe5220084  swc1        $f2, 0x84($t1)
    ctx->pc = 0x13921cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 132), bits); }
    // 0x139220: 0xe5210088  swc1        $f1, 0x88($t1)
    ctx->pc = 0x139220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 136), bits); }
    // 0x139224: 0xe520008c  swc1        $f0, 0x8C($t1)
    ctx->pc = 0x139224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 140), bits); }
label_139228:
    // 0x139228: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x139228u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x13922c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x139230: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x139230u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x139234: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x139234u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x139238: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x13923c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x13923cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x139240: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x139240u;
    {
        const bool branch_taken_0x139240 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x139244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139240u;
            // 0x139244: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139240) {
            ctx->pc = 0x139228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_139228;
        }
    }
    ctx->pc = 0x139248u;
label_139248:
    // 0x139248: 0x3e00008  jr          $ra
    ctx->pc = 0x139248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139250u;
}
