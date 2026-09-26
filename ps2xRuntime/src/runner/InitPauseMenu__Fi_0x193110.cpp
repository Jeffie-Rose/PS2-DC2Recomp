#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitPauseMenu__Fi
// Address: 0x193110 - 0x193508
void InitPauseMenu__Fi_0x193110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPauseMenu__Fi_0x193110");
#endif

    switch (ctx->pc) {
        case 0x193168u: goto label_193168;
        case 0x1931c4u: goto label_1931c4;
        case 0x193208u: goto label_193208;
        case 0x19325cu: goto label_19325c;
        case 0x193278u: goto label_193278;
        case 0x19329cu: goto label_19329c;
        case 0x1932e0u: goto label_1932e0;
        case 0x193448u: goto label_193448;
        case 0x1934c0u: goto label_1934c0;
        case 0x1934d8u: goto label_1934d8;
        default: break;
    }

    ctx->pc = 0x193110u;

    // 0x193110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x193110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x193114: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x193118: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x193118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19311c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x19311cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193120: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x193120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x193124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x193128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19312c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19312cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193130: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x193130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x193134: 0xac207444  sw          $zero, 0x7444($at)
    ctx->pc = 0x193134u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29764), GPR_U32(ctx, 0));
    // 0x193138: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x19313c: 0xac207464  sw          $zero, 0x7464($at)
    ctx->pc = 0x19313cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29796), GPR_U32(ctx, 0));
    // 0x193140: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x193144: 0xac207468  sw          $zero, 0x7468($at)
    ctx->pc = 0x193144u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29800), GPR_U32(ctx, 0));
    // 0x193148: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x19314c: 0xac20746c  sw          $zero, 0x746C($at)
    ctx->pc = 0x19314cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29804), GPR_U32(ctx, 0));
    // 0x193150: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x193154: 0xac207470  sw          $zero, 0x7470($at)
    ctx->pc = 0x193154u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29808), GPR_U32(ctx, 0));
    // 0x193158: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x193158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x19315c: 0xac207474  sw          $zero, 0x7474($at)
    ctx->pc = 0x19315cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29812), GPR_U32(ctx, 0));
    // 0x193160: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x193160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x193164: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x193164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
label_193168:
    // 0x193168: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x193168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x19316c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x19316cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x193170: 0xacc000e8  sw          $zero, 0xE8($a2)
    ctx->pc = 0x193170u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 0));
    // 0x193174: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x193174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x193178: 0xacc000ec  sw          $zero, 0xEC($a2)
    ctx->pc = 0x193178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 236), GPR_U32(ctx, 0));
    // 0x19317c: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x19317cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x193180: 0xacc000f0  sw          $zero, 0xF0($a2)
    ctx->pc = 0x193180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
    // 0x193184: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x193184u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
    // 0x193188: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x193188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
    // 0x19318c: 0xacc000fc  sw          $zero, 0xFC($a2)
    ctx->pc = 0x19318cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 0));
    // 0x193190: 0xacc00100  sw          $zero, 0x100($a2)
    ctx->pc = 0x193190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 0));
    // 0x193194: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x193194u;
    {
        const bool branch_taken_0x193194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193194u;
            // 0x193198: 0xacc00104  sw          $zero, 0x104($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193194) {
            ctx->pc = 0x193168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193168;
        }
    }
    ctx->pc = 0x19319Cu;
    // 0x19319c: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x19319cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1931a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1931a4: 0xac2074b8  sw          $zero, 0x74B8($at)
    ctx->pc = 0x1931a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29880), GPR_U32(ctx, 0));
    // 0x1931a8: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931ac: 0xac22751c  sw          $v0, 0x751C($at)
    ctx->pc = 0x1931acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29980), GPR_U32(ctx, 2));
    // 0x1931b0: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931b4: 0xac2074bc  sw          $zero, 0x74BC($at)
    ctx->pc = 0x1931b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 29884), GPR_U32(ctx, 0));
    // 0x1931b8: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931bc: 0xc0547dc  jal         func_151F70
    ctx->pc = 0x1931BCu;
    SET_GPR_U32(ctx, 31, 0x1931C4u);
    ctx->pc = 0x1931C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1931BCu;
            // 0x1931c0: 0xac207518  sw          $zero, 0x7518($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 29976), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931C4u; }
        if (ctx->pc != 0x1931C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1931C4u; }
        if (ctx->pc != 0x1931C4u) { return; }
    }
    ctx->pc = 0x1931C4u;
label_1931c4:
    // 0x1931c4: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931c8: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x1931c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x1931cc: 0xe4207548  swc1        $f0, 0x7548($at)
    ctx->pc = 0x1931ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 30024), bits); }
    // 0x1931d0: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x1931d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
    // 0x1931d4: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931d8: 0xac207550  sw          $zero, 0x7550($at)
    ctx->pc = 0x1931d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30032), GPR_U32(ctx, 0));
    // 0x1931dc: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931e0: 0xac20755c  sw          $zero, 0x755C($at)
    ctx->pc = 0x1931e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30044), GPR_U32(ctx, 0));
    // 0x1931e4: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931e8: 0xac207560  sw          $zero, 0x7560($at)
    ctx->pc = 0x1931e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30048), GPR_U32(ctx, 0));
    // 0x1931ec: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931f0: 0xac207564  sw          $zero, 0x7564($at)
    ctx->pc = 0x1931f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30052), GPR_U32(ctx, 0));
    // 0x1931f4: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x1931f8: 0xac207568  sw          $zero, 0x7568($at)
    ctx->pc = 0x1931f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 30056), GPR_U32(ctx, 0));
    // 0x1931fc: 0x3c0101e6  lui         $at, 0x1E6
    ctx->pc = 0x1931fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)486 << 16));
    // 0x193200: 0xc0557f0  jal         func_155FC0
    ctx->pc = 0x193200u;
    SET_GPR_U32(ctx, 31, 0x193208u);
    ctx->pc = 0x193204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193200u;
            // 0x193204: 0xac20756c  sw          $zero, 0x756C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 30060), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193208u; }
        if (ctx->pc != 0x193208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193208u; }
        if (ctx->pc != 0x193208u) { return; }
    }
    ctx->pc = 0x193208u;
label_193208:
    // 0x193208: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19320c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19320cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x193210: 0xac208b68  sw          $zero, -0x7498($at)
    ctx->pc = 0x193210u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937448), GPR_U32(ctx, 0));
    // 0x193214: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x193214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193218: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19321c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19321cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193220: 0xac228b70  sw          $v0, -0x7490($at)
    ctx->pc = 0x193220u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937456), GPR_U32(ctx, 2));
    // 0x193224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193228: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19322c: 0xac228b74  sw          $v0, -0x748C($at)
    ctx->pc = 0x19322cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937460), GPR_U32(ctx, 2));
    // 0x193230: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x193230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x193234: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193238: 0xa0228b90  sb          $v0, -0x7470($at)
    ctx->pc = 0x193238u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294937488), (uint8_t)GPR_U32(ctx, 2));
    // 0x19323c: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x19323cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193240: 0xac208b6c  sw          $zero, -0x7494($at)
    ctx->pc = 0x193240u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937452), GPR_U32(ctx, 0));
    // 0x193244: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193248: 0xac208b78  sw          $zero, -0x7488($at)
    ctx->pc = 0x193248u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937464), GPR_U32(ctx, 0));
    // 0x19324c: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x19324cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193250: 0x8c228b60  lw          $v0, -0x74A0($at)
    ctx->pc = 0x193250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937440)));
    // 0x193254: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193258: 0xac228b64  sw          $v0, -0x749C($at)
    ctx->pc = 0x193258u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294937444), GPR_U32(ctx, 2));
label_19325c:
    // 0x19325c: 0x3c0201e6  lui         $v0, 0x1E6
    ctx->pc = 0x19325cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)486 << 16));
    // 0x193260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193264: 0x24427390  addiu       $v0, $v0, 0x7390
    ctx->pc = 0x193264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29584));
    // 0x193268: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x193268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19326c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x19326cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x193270: 0xc049c86  jal         func_127218
    ctx->pc = 0x193270u;
    SET_GPR_U32(ctx, 31, 0x193278u);
    ctx->pc = 0x193274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193270u;
            // 0x193274: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193278u; }
        if (ctx->pc != 0x193278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193278u; }
        if (ctx->pc != 0x193278u) { return; }
    }
    ctx->pc = 0x193278u;
label_193278:
    // 0x193278: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x193278u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x19327c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x19327cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x193280: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x193280u;
    {
        const bool branch_taken_0x193280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193280u;
            // 0x193284: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193280) {
            ctx->pc = 0x19325Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19325c;
        }
    }
    ctx->pc = 0x193288u;
    // 0x193288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19328c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19328cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193290: 0x3c0301e6  lui         $v1, 0x1E6
    ctx->pc = 0x193290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)486 << 16));
    // 0x193294: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x193294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193298: 0x24637390  addiu       $v1, $v1, 0x7390
    ctx->pc = 0x193298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29584));
label_19329c:
    // 0x19329c: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x19329cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1932a0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1932a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x1932a4: 0xace41a04  sw          $a0, 0x1A04($a3)
    ctx->pc = 0x1932a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6660), GPR_U32(ctx, 4));
    // 0x1932a8: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1932a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1932ac: 0xace41a08  sw          $a0, 0x1A08($a3)
    ctx->pc = 0x1932acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 4));
    // 0x1932b0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1932b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x1932b4: 0xace41a0c  sw          $a0, 0x1A0C($a3)
    ctx->pc = 0x1932b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6668), GPR_U32(ctx, 4));
    // 0x1932b8: 0xace41a10  sw          $a0, 0x1A10($a3)
    ctx->pc = 0x1932b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6672), GPR_U32(ctx, 4));
    // 0x1932bc: 0xace41a14  sw          $a0, 0x1A14($a3)
    ctx->pc = 0x1932bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6676), GPR_U32(ctx, 4));
    // 0x1932c0: 0xace41a18  sw          $a0, 0x1A18($a3)
    ctx->pc = 0x1932c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6680), GPR_U32(ctx, 4));
    // 0x1932c4: 0xace41a1c  sw          $a0, 0x1A1C($a3)
    ctx->pc = 0x1932c4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6684), GPR_U32(ctx, 4));
    // 0x1932c8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1932C8u;
    {
        const bool branch_taken_0x1932c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1932CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1932C8u;
            // 0x1932cc: 0xace41a20  sw          $a0, 0x1A20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1932c8) {
            ctx->pc = 0x19329Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19329c;
        }
    }
    ctx->pc = 0x1932D0u;
    // 0x1932d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1932d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1932d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1932d8: 0x3c0301e6  lui         $v1, 0x1E6
    ctx->pc = 0x1932d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)486 << 16));
    // 0x1932dc: 0x24637390  addiu       $v1, $v1, 0x7390
    ctx->pc = 0x1932dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29584));
label_1932e0:
    // 0x1932e0: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1932e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1932e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1932e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1932e8: 0xacc01a44  sw          $zero, 0x1A44($a2)
    ctx->pc = 0x1932e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 0));
    // 0x1932ec: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1932ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1932f0: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x1932f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
    // 0x1932f4: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1932f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x1932f8: 0xacc01a48  sw          $zero, 0x1A48($a2)
    ctx->pc = 0x1932f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6728), GPR_U32(ctx, 0));
    // 0x1932fc: 0xacc01a88  sw          $zero, 0x1A88($a2)
    ctx->pc = 0x1932fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6792), GPR_U32(ctx, 0));
    // 0x193300: 0xacc01a4c  sw          $zero, 0x1A4C($a2)
    ctx->pc = 0x193300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6732), GPR_U32(ctx, 0));
    // 0x193304: 0xacc01a8c  sw          $zero, 0x1A8C($a2)
    ctx->pc = 0x193304u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6796), GPR_U32(ctx, 0));
    // 0x193308: 0xacc01a50  sw          $zero, 0x1A50($a2)
    ctx->pc = 0x193308u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6736), GPR_U32(ctx, 0));
    // 0x19330c: 0xacc01a90  sw          $zero, 0x1A90($a2)
    ctx->pc = 0x19330cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6800), GPR_U32(ctx, 0));
    // 0x193310: 0xacc01a54  sw          $zero, 0x1A54($a2)
    ctx->pc = 0x193310u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6740), GPR_U32(ctx, 0));
    // 0x193314: 0xacc01a94  sw          $zero, 0x1A94($a2)
    ctx->pc = 0x193314u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6804), GPR_U32(ctx, 0));
    // 0x193318: 0xacc01a58  sw          $zero, 0x1A58($a2)
    ctx->pc = 0x193318u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6744), GPR_U32(ctx, 0));
    // 0x19331c: 0xacc01a98  sw          $zero, 0x1A98($a2)
    ctx->pc = 0x19331cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6808), GPR_U32(ctx, 0));
    // 0x193320: 0xacc01a5c  sw          $zero, 0x1A5C($a2)
    ctx->pc = 0x193320u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6748), GPR_U32(ctx, 0));
    // 0x193324: 0xacc01a9c  sw          $zero, 0x1A9C($a2)
    ctx->pc = 0x193324u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6812), GPR_U32(ctx, 0));
    // 0x193328: 0xacc01a60  sw          $zero, 0x1A60($a2)
    ctx->pc = 0x193328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6752), GPR_U32(ctx, 0));
    // 0x19332c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x19332Cu;
    {
        const bool branch_taken_0x19332c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19332Cu;
            // 0x193330: 0xacc01aa0  sw          $zero, 0x1AA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19332c) {
            ctx->pc = 0x1932E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1932e0;
        }
    }
    ctx->pc = 0x193334u;
    // 0x193334: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x193338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19333c: 0xac208e54  sw          $zero, -0x71AC($at)
    ctx->pc = 0x19333cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938196), GPR_U32(ctx, 0));
    // 0x193340: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x193340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x193344: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19334c: 0xac228e5c  sw          $v0, -0x71A4($at)
    ctx->pc = 0x19334cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938204), GPR_U32(ctx, 2));
    // 0x193350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x193350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x193354: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x193358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19335c: 0xac208e58  sw          $zero, -0x71A8($at)
    ctx->pc = 0x19335cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938200), GPR_U32(ctx, 0));
    // 0x193360: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193364: 0xac208e60  sw          $zero, -0x71A0($at)
    ctx->pc = 0x193364u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938208), GPR_U32(ctx, 0));
    // 0x193368: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193368u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19336c: 0xac208e64  sw          $zero, -0x719C($at)
    ctx->pc = 0x19336cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938212), GPR_U32(ctx, 0));
    // 0x193370: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193374: 0xac208e68  sw          $zero, -0x7198($at)
    ctx->pc = 0x193374u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938216), GPR_U32(ctx, 0));
    // 0x193378: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19337c: 0xac238e6c  sw          $v1, -0x7194($at)
    ctx->pc = 0x19337cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938220), GPR_U32(ctx, 3));
    // 0x193380: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193384: 0xac238e70  sw          $v1, -0x7190($at)
    ctx->pc = 0x193384u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938224), GPR_U32(ctx, 3));
    // 0x193388: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19338c: 0xac238e74  sw          $v1, -0x718C($at)
    ctx->pc = 0x19338cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938228), GPR_U32(ctx, 3));
    // 0x193390: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193394: 0xac208e78  sw          $zero, -0x7188($at)
    ctx->pc = 0x193394u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938232), GPR_U32(ctx, 0));
    // 0x193398: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19339c: 0xac208e7c  sw          $zero, -0x7184($at)
    ctx->pc = 0x19339cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938236), GPR_U32(ctx, 0));
    // 0x1933a0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933a4: 0xac208e80  sw          $zero, -0x7180($at)
    ctx->pc = 0x1933a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938240), GPR_U32(ctx, 0));
    // 0x1933a8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933ac: 0xac208e84  sw          $zero, -0x717C($at)
    ctx->pc = 0x1933acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938244), GPR_U32(ctx, 0));
    // 0x1933b0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933b4: 0xac208e88  sw          $zero, -0x7178($at)
    ctx->pc = 0x1933b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938248), GPR_U32(ctx, 0));
    // 0x1933b8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933bc: 0xac208e8c  sw          $zero, -0x7174($at)
    ctx->pc = 0x1933bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938252), GPR_U32(ctx, 0));
    // 0x1933c0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933c4: 0xac208e90  sw          $zero, -0x7170($at)
    ctx->pc = 0x1933c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938256), GPR_U32(ctx, 0));
    // 0x1933c8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933cc: 0xac238e94  sw          $v1, -0x716C($at)
    ctx->pc = 0x1933ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938260), GPR_U32(ctx, 3));
    // 0x1933d0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933d4: 0xac238e98  sw          $v1, -0x7168($at)
    ctx->pc = 0x1933d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938264), GPR_U32(ctx, 3));
    // 0x1933d8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933dc: 0xac238e9c  sw          $v1, -0x7164($at)
    ctx->pc = 0x1933dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938268), GPR_U32(ctx, 3));
    // 0x1933e0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933e4: 0xac238ea0  sw          $v1, -0x7160($at)
    ctx->pc = 0x1933e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938272), GPR_U32(ctx, 3));
    // 0x1933e8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933ec: 0xac208ea4  sw          $zero, -0x715C($at)
    ctx->pc = 0x1933ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938276), GPR_U32(ctx, 0));
    // 0x1933f0: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933f4: 0xac208ea8  sw          $zero, -0x7158($at)
    ctx->pc = 0x1933f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938280), GPR_U32(ctx, 0));
    // 0x1933f8: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1933f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1933fc: 0xac208eac  sw          $zero, -0x7154($at)
    ctx->pc = 0x1933fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938284), GPR_U32(ctx, 0));
    // 0x193400: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193404: 0xac208eb0  sw          $zero, -0x7150($at)
    ctx->pc = 0x193404u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938288), GPR_U32(ctx, 0));
    // 0x193408: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19340c: 0xac208eb4  sw          $zero, -0x714C($at)
    ctx->pc = 0x19340cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938292), GPR_U32(ctx, 0));
    // 0x193410: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193414: 0xac208eb8  sw          $zero, -0x7148($at)
    ctx->pc = 0x193414u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938296), GPR_U32(ctx, 0));
    // 0x193418: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19341c: 0xac208ec0  sw          $zero, -0x7140($at)
    ctx->pc = 0x19341cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938304), GPR_U32(ctx, 0));
    // 0x193420: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193424: 0xac208ec4  sw          $zero, -0x713C($at)
    ctx->pc = 0x193424u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938308), GPR_U32(ctx, 0));
    // 0x193428: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19342c: 0xac208ecc  sw          $zero, -0x7134($at)
    ctx->pc = 0x19342cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938316), GPR_U32(ctx, 0));
    // 0x193430: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x193434: 0xac208ec8  sw          $zero, -0x7138($at)
    ctx->pc = 0x193434u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938312), GPR_U32(ctx, 0));
    // 0x193438: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x193438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x19343c: 0xac208ed0  sw          $zero, -0x7130($at)
    ctx->pc = 0x19343cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938320), GPR_U32(ctx, 0));
    // 0x193440: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x193440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x193444: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x193444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
label_193448:
    // 0x193448: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x193448u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x19344c: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x19344cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x193450: 0xad001b44  sw          $zero, 0x1B44($t0)
    ctx->pc = 0x193450u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6980), GPR_U32(ctx, 0));
    // 0x193454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x193454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x193458: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x193458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
    // 0x19345c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x19345cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x193460: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x193460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
    // 0x193464: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x193464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x193468: 0xad001c34  sw          $zero, 0x1C34($t0)
    ctx->pc = 0x193468u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 0));
    // 0x19346c: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x19346cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x193470: 0xad031c84  sw          $v1, 0x1C84($t0)
    ctx->pc = 0x193470u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7300), GPR_U32(ctx, 3));
    // 0x193474: 0xad001cd4  sw          $zero, 0x1CD4($t0)
    ctx->pc = 0x193474u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7380), GPR_U32(ctx, 0));
    // 0x193478: 0xad001d24  sw          $zero, 0x1D24($t0)
    ctx->pc = 0x193478u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7460), GPR_U32(ctx, 0));
    // 0x19347c: 0xad001d74  sw          $zero, 0x1D74($t0)
    ctx->pc = 0x19347cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7540), GPR_U32(ctx, 0));
    // 0x193480: 0xad001dc4  sw          $zero, 0x1DC4($t0)
    ctx->pc = 0x193480u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7620), GPR_U32(ctx, 0));
    // 0x193484: 0xad001e14  sw          $zero, 0x1E14($t0)
    ctx->pc = 0x193484u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7700), GPR_U32(ctx, 0));
    // 0x193488: 0xad031e64  sw          $v1, 0x1E64($t0)
    ctx->pc = 0x193488u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7780), GPR_U32(ctx, 3));
    // 0x19348c: 0xad001eb4  sw          $zero, 0x1EB4($t0)
    ctx->pc = 0x19348cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7860), GPR_U32(ctx, 0));
    // 0x193490: 0xad001f04  sw          $zero, 0x1F04($t0)
    ctx->pc = 0x193490u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7940), GPR_U32(ctx, 0));
    // 0x193494: 0xad001f54  sw          $zero, 0x1F54($t0)
    ctx->pc = 0x193494u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8020), GPR_U32(ctx, 0));
    // 0x193498: 0xad031fa4  sw          $v1, 0x1FA4($t0)
    ctx->pc = 0x193498u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8100), GPR_U32(ctx, 3));
    // 0x19349c: 0xad031ff4  sw          $v1, 0x1FF4($t0)
    ctx->pc = 0x19349cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8180), GPR_U32(ctx, 3));
    // 0x1934a0: 0xad002044  sw          $zero, 0x2044($t0)
    ctx->pc = 0x1934a0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8260), GPR_U32(ctx, 0));
    // 0x1934a4: 0xad002094  sw          $zero, 0x2094($t0)
    ctx->pc = 0x1934a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8340), GPR_U32(ctx, 0));
    // 0x1934a8: 0xad0020e4  sw          $zero, 0x20E4($t0)
    ctx->pc = 0x1934a8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8420), GPR_U32(ctx, 0));
    // 0x1934ac: 0xad002134  sw          $zero, 0x2134($t0)
    ctx->pc = 0x1934acu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8500), GPR_U32(ctx, 0));
    // 0x1934b0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1934B0u;
    {
        const bool branch_taken_0x1934b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1934B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1934B0u;
            // 0x1934b4: 0xad002184  sw          $zero, 0x2184($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1934b0) {
            ctx->pc = 0x193448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_193448;
        }
    }
    ctx->pc = 0x1934B8u;
    // 0x1934b8: 0xc054bb4  jal         func_152ED0
    ctx->pc = 0x1934B8u;
    SET_GPR_U32(ctx, 31, 0x1934C0u);
    ctx->pc = 0x1934BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934B8u;
            // 0x1934bc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934C0u; }
        if (ctx->pc != 0x1934C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934C0u; }
        if (ctx->pc != 0x1934C0u) { return; }
    }
    ctx->pc = 0x1934C0u;
label_1934c0:
    // 0x1934c0: 0x3c0401e6  lui         $a0, 0x1E6
    ctx->pc = 0x1934c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)486 << 16));
    // 0x1934c4: 0x3c0101e7  lui         $at, 0x1E7
    ctx->pc = 0x1934c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)487 << 16));
    // 0x1934c8: 0x24847390  addiu       $a0, $a0, 0x7390
    ctx->pc = 0x1934c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29584));
    // 0x1934cc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1934ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1934d0: 0xc054cdc  jal         func_153370
    ctx->pc = 0x1934D0u;
    SET_GPR_U32(ctx, 31, 0x1934D8u);
    ctx->pc = 0x1934D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1934D0u;
            // 0x1934d4: 0xac328ebc  sw          $s2, -0x7144($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294938300), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934D8u; }
        if (ctx->pc != 0x1934D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1934D8u; }
        if (ctx->pc != 0x1934D8u) { return; }
    }
    ctx->pc = 0x1934D8u;
label_1934d8:
    // 0x1934d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1934d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1934dc: 0xaf808b44  sw          $zero, -0x74BC($gp)
    ctx->pc = 0x1934dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937412), GPR_U32(ctx, 0));
    // 0x1934e0: 0xaf838b50  sw          $v1, -0x74B0($gp)
    ctx->pc = 0x1934e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937424), GPR_U32(ctx, 3));
    // 0x1934e4: 0xaf808b48  sw          $zero, -0x74B8($gp)
    ctx->pc = 0x1934e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937416), GPR_U32(ctx, 0));
    // 0x1934e8: 0xaf808b54  sw          $zero, -0x74AC($gp)
    ctx->pc = 0x1934e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937428), GPR_U32(ctx, 0));
    // 0x1934ec: 0xaf808b4c  sw          $zero, -0x74B4($gp)
    ctx->pc = 0x1934ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937420), GPR_U32(ctx, 0));
    // 0x1934f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1934f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1934f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1934f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1934f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1934f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1934fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1934fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x193500: 0x3e00008  jr          $ra
    ctx->pc = 0x193500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193500u;
            // 0x193504: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193508u;
}
